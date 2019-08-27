#include <stdio.h>
int main(void)
{
		//一份資料裡面有兩種資料型態，分別是整數和浮點數，把純整數抓出來，並計算有幾筆整數
	int i=0,n=0,sum=0;
	scanf("%d",&n);
		//輸入一個數字n，表示有幾筆測資
	float m[100000];
	
	for(i=0;i<n;i++)
		scanf("%f",&m[i]);
			//輸入n個數字，包含整數與浮點數
	for(i=0;i<n;i++)
		{ 
			if((int)m[i]==m[i])
			{
			sum+=1;
			}
		}	
	printf("%d\n",sum);
		
		
	for(i=0;i<n;i++)
		{ 
			if((int)m[i]==m[i])
			{
				printf("%.0f",m[i]); //因為m[i]的資料型態是float，因此%後是加f，.n表示小數點後有n位數 
				printf("\n");
			}
				
		} 


		//system("pause");
  		return 0;

}
