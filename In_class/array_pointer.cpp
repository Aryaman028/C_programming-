//Using array with the help of pointers
#include <stdio.h>

int main(){
	
	int ptr[5],i,n,odds;
	int *arr=&ptr[0];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d element",i);
		scanf("%d",(arr+i));	
	}
	for(i=0;i<n;i++){
		if (*(arr+i)%2!=0){
			odds++;
		}
	}
	printf("%d",odds);
}
