#include<stdio.h>

int main(){
	int m,n;
	printf("Enter the number of Rows\t");
	scanf("%d",&n);
	printf("Enter the number of columns\t");
	scanf("%d",&m);
	int a[n][m], b[n][m], c[n][m]; 
	int i , j , k;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter element at %d%d\t",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++) {
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	//Second Matrix
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter element at %d%d\t",i,j);
			scanf("%d", &b[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++) {
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	//adding them
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
		printf("\n");
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++) {
			printf("%d",c[i][j]);
		}
		printf("\n");
		}
	return 0;
}
