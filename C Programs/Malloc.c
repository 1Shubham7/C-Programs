#include<stdio.h>
#include<stdlib.h>

void main(){
	int i;
	int *ptr;
	ptr = (int*)malloc(3*sizeof(int));
	
	
	if(ptr==NULL){
		printf("Memory not allocated");
	} else {
		printf("Memory allocated!\n");
		printf("Address = %u",ptr);
	}
	for (i=0;i<4;i++){
		ptr[i] = i;
	}
	for (i=0;i<4;i++){
		printf("%d\n",ptr[i]);
	}
}
