#include <stdio.h>

int main(){
	int ar[5];
	int sum = 0;
	printf("Input 20 numbers");
	
	for(int i = 0;i<5;i++){
		scanf("%d",&ar[i]);
	}
	printf("\n");
	for(int i = 0;i<5;i++){
		if (ar[i]%2==0){
			printf("%d \t",ar[i]);
		}
	}
	printf("\n");
	for(int i = 0;i<5;i++){
		if (ar[i]%2!=0){
			printf("%d \t",ar[i]);
		}
	}
	printf("\n");
	for(int i = 0;i<5;i++){
		sum+=ar[i];	
	}	
		printf("%d \t",sum);
}
