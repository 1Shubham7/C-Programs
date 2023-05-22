#include<stdio.h>

void main(){
	
	int a[5] = {5,2,6,1,3};
	printf("Before Sorting\n");
	
	int a[5] = {10,8,9,3,7};
	int i,j,k;
	for(i = 0;i<5;i++){
		for(j = i+1;j<=4;j++){
			if (a[i]>a[j]){
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
