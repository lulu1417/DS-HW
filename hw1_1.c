#include <stdio.h>
int main(void)
{
		//�@����Ƹ̭�����ظ�ƫ��A�A���O�O��ƩM�B�I�ơA��¾�Ƨ�X�ӡA�íp�⦳�X�����
	int i=0,n=0,sum=0;
	scanf("%d",&n);
		//��J�@�ӼƦrn�A��ܦ��X������
	float m[100000];
	
	for(i=0;i<n;i++)
		scanf("%f",&m[i]);
			//��Jn�ӼƦr�A�]�t��ƻP�B�I��
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
				printf("%.0f",m[i]); //�]��m[i]����ƫ��A�Ofloat�A�]��%��O�[f�A.n��ܤp���I�ᦳn��� 
				printf("\n");
			}
				
		} 


		//system("pause");
  		return 0;

}
