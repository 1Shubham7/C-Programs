#include<stdio.h>
#include<string.h>

void main(){
	char st[100],  rst[100];
	printf("Enter the String");
	gets(st);
	puts(st);
	int i,j;
	j = strlen(st)-1;
	for ( i= 0; i<=j;i++){
		rst[i] = st[j-i];
	}
	puts(rst);
	if (strcmp(st, rst)==0){
		printf("Pallendrome");
	} else {
		printf("Not a pallendrome");
	}
}
