#include<stdio.h>

void findOccurence(int digit)
{
	int Temp=digit;
	int Arr[10]={0};
	Temp=digit;
		while(Temp!=0)
		{
			
		  Arr[Temp%10]++;
          Temp=Temp/10;		  
		}
	for(int j=0;j<10;j++)
	{
		printf("%d Occurence is:%d\n",j,Arr[j]);
	}
}
int main()
{
	int digit=0;
	scanf("%d",&digit);
	findOccurence(digit);
	return(0);
}