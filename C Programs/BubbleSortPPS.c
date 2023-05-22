#include<stdio.h>

void main(){
	int a[5] = {5,2,6,1,3};
	printf("Before Sorting\n");
	
	int i,j,k;
	for (i = 0; i<5;i++){
		printf("%d\t" , a[i]);
	}
	printf("\n");
	
	for(i = 0; i< 5;i++){
		for(j=0;j<4;j++){
			if(a[j]>a[j+1]) {
				 k = a[j];
				 a[j] = a[j+1];
				 a[j+1] = k;
			}
		}
	}
	printf("After Sorting\n");
	for (i = 0; i<5;i++){
		printf("%d\t" , a[i]);
	}
}
