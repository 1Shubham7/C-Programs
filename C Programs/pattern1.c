#include<stdio.h>
void main()
{
	char i = 'A',j;
	for(i;i<='E';i++)
	{
		for(j='A';j<=i;j++){
			printf("%c",i);
		}
		printf("\n");
	}
}

