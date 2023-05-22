#include<stdio.h>
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	int d,sum=0;
	int n = num;
	for(d;n>0;n=n/10)
	{
		d = n%10;
		sum = sum +(d*d*d);
//		digit = digit*10;
	}
	printf("%d",sum);
	printf("\n");
	if(sum==num)
	{
		printf("Angistrom");
	
	}
	else {
		printf("Not Angistrom");
	}
}
//293
//output = 392
