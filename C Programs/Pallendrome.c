#include<stdio.h>
void main()
{
	printf("Enter the number = ");
	int i,digit,reverse;
	scanf("%d",&i);
	int n = i;
	while(n>0)
	{
		digit=n%10;
		reverse=reverse*10+digit;
		n=n/10;
	}
	printf("%d",reverse);
	if (reverse==i){
		printf("\nPallindrome");
	}	else{
		printf("\nNot a Pallindrome");
	}
}
//10101
