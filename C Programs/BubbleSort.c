#include<stdio.h>
void printArray(int A[],int n){
	int i = 0;
	for (i = 0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}
void bubbleSort(int A[], int n){
	int i = 0, j = 0,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp = A[j+1];
				A[j+1] = A[j];
				A[j] = temp;
			}
		}
	}
}
void main(){
	int A[] = {2,5,1,9,10};
	int n = 5;
	printf("Array Before Sorting : \n");
	printArray(A,n);
	bubbleSort(A,n);
	printf("Array After Sorting : \n");
	printArray(A,n);
	
}

