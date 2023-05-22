#include<stdio.h>
void main()
{
	int i,j,k,m;
	for (i=1;i<=5;i++){
		for (j=4;j>=i;j--){
			printf(" ");
		}
		for (k=1;k<=i;k++){
			printf("*");
		}
		for (m=2;m<=i;m++){
			printf("*");
		}
		printf("\n");
	}
	
}
