#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000+10

typedef struct node{
    int value;
    struct node *nextPtr;
}Node;
typedef Node* NodePtr;

NodePtr road[MAX];
int fire[MAX],current_fire,target_fire,lose = 0,win = 0;

void insert_node(int o,int p);
void DFS(int dragon_n);

int main(){
    int N,J,o,p;

    int i;


    memset(road,0,sizeof(road));

    scanf("%d%d%d%d",&N,&J,&current_fire,&target_fire);
    for(i = 0;i < N;++i){
        scanf("%d",&fire[i]);
    }
    for(i = 0;i < J;++i){
        scanf("%d%d",&o,&p);
        insert_node(o,p);
    }
    if(current_fire < target_fire){
        DFS(0);
    }
    printf("%d %d %d\n",lose,win,current_fire);
    return 0;
}

void insert_node(int o,int p){
    NodePtr currentPtr = road[o];
    NodePtr newPtr = (NodePtr)malloc(sizeof(Node));

    newPtr->value = p;
    newPtr->nextPtr = NULL;

    if(NULL == currentPtr){
        road[o] = newPtr;
    }
    else{
        while(NULL!=currentPtr->nextPtr && currentPtr->nextPtr->value<p){
            currentPtr = currentPtr->nextPtr;
        }
        newPtr->nextPtr = currentPtr->nextPtr;
        currentPtr->nextPtr = newPtr;
    }
}

void DFS(int dragon_n){
    if(current_fire >= target_fire)return;
    if(fire[dragon_n] >= current_fire){
        lose++;
        return;
    }
    win++;
    current_fire += fire[dragon_n];

    NodePtr currentPtr = road[dragon_n];
    while(currentPtr){
        DFS(currentPtr->value);
        currentPtr = currentPtr->nextPtr;
    }
}
