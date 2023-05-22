#include<stdio.h>

int fab(int);
void main(){
	int n,i;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1; i<=n ; i++){
		printf("%d\t",fab(i));
	}
	fab(n);
}

fab( n){
	if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fab(n-1)+fab(n-2));
   }
}

