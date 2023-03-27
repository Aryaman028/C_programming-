#include <stdio.h>

void fibo(int n);

int main(){
	int n ;
	printf("<--Fibonacci Series-->");
	printf("\nInput your number:");
	scanf("%d",&n);
	fibo(n);
}

void fibo(int n){
	int a = 0;
	int b = 1;
	int s;
	printf("%d \t",a);
	printf("%d\t",b);
	for(int i=0;i<n-2;i++){
		s = a+b;
		printf("%d \t",s);
		a = b;
		b = s;
		
		
	}
}
