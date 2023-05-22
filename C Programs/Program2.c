#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	int digit,sum=0;
	for(digit;num>0;num=num/10)
	{
		digit = num%10;
		printf("%d",digit);
	}
	
}
//293
//output = 392
