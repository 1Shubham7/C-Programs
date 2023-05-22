#include<Stdio.h>
#include<String.h>
void main(){
	int i,temp,j;
	int array[] = {12,1,4,10,7};
	int n = strlen(array)-1;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] =temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d",array[i]);
	}
}
