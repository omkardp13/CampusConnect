/*
   This Program Accepts UpTo 10 Billion Number

*/
#include<stdio.h>

void singleDigits(int number)
{
	    if(number==1)
		{
			printf("One ");
			
		}else if(number==2)
		{
			printf("Two ");
		}
		else if(number==3)
		{
			printf("Three ");
		}
		else if(number==4)
		{
			printf("Four ");
		}
		else if(number==5)
		{
			printf("Five ");
		}
		else if(number==6)
		{
			printf("Six ");
		}
		else if(number==7)
		{
			printf("Seven ");
		}
		else if(number==8)
		{
			printf("Eight ");
		}
		else if(number==9)
		{
			printf("Nine ");
		}
}
void DoubleDigit(int number)
{
	if(number==11)
	{
		printf("Eleven ");
	}else if(number==12)
	{
		printf("Twelve ");
	}
	else if(number==13)
	{
		printf("Thirteen ");
	}
	else if(number==14)
	{
		printf("Fourteen ");
	}
	else if(number==15)
	{
		printf("Fifteen ");
	}
	else if(number==16)
	{
		printf("Sixteen ");
	}
	else if(number==17)
	{
		printf("Seventeen ");
	}
	else if(number==18)
	{
		printf("Eighteen ");
	}
	else if(number==19)
	{
		printf("Nineteen ");
	}
	else
	{
	int temp=number%10;
	int a=number/10;
	if(a==2)
		{
			printf("Twenty ");
		}
		else if(a==3)
		{
			printf("Thirty ");
		}
		else if(a==4)
		{
			printf("Fourty ");
		}
		else if(a==5)
		{
			printf("Fifty ");
		}
		else if(a==6)
		{
			printf("Sixty ");
		}
		else if(a==7)
		{
			printf("Seventy ");
		}
		else if(a==8)
		{
		printf("Eighty ");	
		}
		else if(a==9)
		{
			printf("Ninty ");
		}
	   singleDigits(temp);	
	}
}
void ThreeDigit(int number)
{
	    int temp=number%100;
		int a=number/100;
		singleDigits(a);
		printf("Hundred ");
		DoubleDigit(temp);
}
void FourDigit(int number)
{
	
	    int temp=number%1000;
		int a=number/1000;
		singleDigits(a);
		printf("Thousand ");
		ThreeDigit(temp);
}
void FiveDigit(int number)
{
	    int temp=number%1000;
		int a=number/1000;
		DoubleDigit(a);
		printf("Thousand ");
		ThreeDigit(temp);
}
void SixDigit(int number)
{
	   int temp=number%1000;
		int a=number/1000;
		ThreeDigit(a);
		printf("Thousand ");
		ThreeDigit(temp);
	
}
void SevenDigit(int number)
{
	    int temp=number%1000;
		int a=number/1000000;
		int b=number/1000;
		singleDigits(a);
		printf("Million ");
		ThreeDigit(b%1000);
		printf("Thousand ");
		ThreeDigit(temp);
}
void EightDigit(int number)
{
	    int temp=number%1000000;
		int a=number/1000000;
		DoubleDigit(a);
		printf("Million ");
		SixDigit(temp);
	
}
void NineDigit(int number)
{
	    int temp=number%1000000;
		int a=number/1000000;
		ThreeDigit(a);
		printf("Million ");
		SixDigit(temp);
}
void TenDigit(long long int number)
{
	    int temp=number%1000000000;
		int a=number/1000000000;
		singleDigits(a);
		printf("Billion ");
		NineDigit(temp);
}
void ElevenDigit(long long int number)
{
	    int temp=number%1000000000;
		int a=(number/1000000000);
		DoubleDigit(a);
		printf("Billions ");
		NineDigit(temp);
}
void numberToWord(long long int number)
{
   	int digitCount=0;
	long long int temp=number;
	while(temp!=0)
	{
		digitCount++;
		temp=temp/10;
	}
	
	if(digitCount==1)
	{
		singleDigits(number);
	}
	else if(digitCount==2)
	{
		DoubleDigit(number);
	}
	else if(digitCount==3)
	{
		ThreeDigit(number);
	}
	else if(digitCount==4)
	{
	    FourDigit(number);	
	}
	else if(digitCount==5)
	{
		FiveDigit(number);
	}
	else if(digitCount==6)
	{
		SixDigit(number);
	}
	else if(digitCount==7)
	{
		SevenDigit(number);
	}
	else if(digitCount==8)
	{
		EightDigit(number);
	}
	else if(digitCount==9)
	{
		NineDigit(number);
	}
	else if(digitCount==10)
	{
		TenDigit(number);
	}
	else if(digitCount==11)
	{
	   
		ElevenDigit(number);
	}
}
int main()
{
	long long int number=0;
	scanf("%lld",&number);
	numberToWord(number);
	return(0);
}