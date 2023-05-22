#include<stdio.h>

int fac(int);
void main(){
	int n ;
	printf("Enter the number\t");
	scanf("%d",&n);
	int x = fac(n);
	printf("The Factorial of %d is %d",n,x);
}

fac(int n){
	if (n == 1){
		return 1;
	} else {
		return n*fac(n-1);
	}
}
