#include<stdio.h>
#include<string.h>
void main() { 

	char a[100], b;
	int count = 0, i;
	printf("Enter the String");
	gets(a);
	printf("Enter the character");
	scanf("%c",&b);
	for(i=0;i<strlen(a);i++){
		if(a[i]==b){
			count++;
		}
	}
	printf("%d", count);

}
