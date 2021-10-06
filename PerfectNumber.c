#include<stdio.h>
int main()
{
	int iNo1=0,iCnt=0;
    printf("Enter Range UpTo:");
    scanf("%d",&iNo1);
	

	for(int i=1;i<=iNo1;i++)
	{
		
		for(int j=1;j<=(i/2);j++)
		{
			
			if(i%j==0)
			{
				iCnt=iCnt+j;
				
			}
		}
		if(iCnt==i)
		{
			printf("%d\t",i);
		}
		
		iCnt=0;
	}
	return(0);
}