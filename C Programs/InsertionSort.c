#include<stdio.h>
void printArray(int A[], int n)
{
	int i=0;
	for(i; i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

void insertionSort(int A[], int n)
{
	int i,j,key;
	for (i=0;i<n;i++){
		key = A[i];
		j = i-1;
		while(j>=0&&A[j]>key)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1] = key;
	}
}
void main(){
	int A[] = {2,5,9,1,10};
	int n = 5;
	printf("ARRAY BEFORE INSERTION SORT : \n");
	printArray(A, n);
	insertionSort(A,n);
	printf("ARRAY AFTER INSERTION SORT : \n");
	printArray(A, n);
	
}
