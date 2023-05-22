#include<stdio.h>
#include<string.h>
int main() {
	char string1[20];
	int i,length;
	int flag = 0;
	
	printf("Enter the string");
	scanf("%s",string1);
	
	length = strlen(string1);
	
	for(i=0; i<length;i++){
		if(string1[i] != string1[length-1-i]){
			flag = 1;
			break;
		}
	}
	
	if (flag){
		printf("%s It is not a pallendrome",string1);
	}
	else {
		printf("%s it is a pallendrome",string1);
	}
	return 0;
	
}
