#include<stdio.h>
void printArray(int A[], int n)
{
	int i = 0;
	for (i;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
void selectionSort(int A[], int n)
{
	int i,j,indexOfMin,temp;
	for (i=0;i<n-1;i++)
	{
		
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[indexOfMin]){
				indexOfMin = j;
			}
		}
		temp = A[i];
		A[i] = A[indexOfMin];
		A[indexOfMin]= temp;
	}
}
void main(){
	int A[] = {2,5,9,1,10};
	int n = 5;
	printf("ARRAY BEFORE SORTING : \n");
	printArray(A,n);
	selectionSort(A,n);
	printf("ARRAY AFTER SORTING : \n");
	printArray(A,n);
}
