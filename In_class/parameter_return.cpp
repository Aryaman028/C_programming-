#include <stdio.h>

//without parameter and without return

//void sum(); //declaration of the function
//
//int main(){
//	
//	sum();
//	
//}
//void sum(){
//	int a,b,c;
//	printf("\n Enter two numbers:");
//	scanf("%d%d",&a,&b);
//	c = a+b;
//	printf("\n sum = %d",c);
//	
//}

//without parameter and with return statement

//int sum(); //declaration of the function
//
//int main(){
//	int c ;
//	c =  sum();
//	printf("\n Sum = %d",c);
//	
//}
//int sum(){
//	int a,b;
//	printf("\n Enter two numbers:");
//	scanf("%d%d",&a,&b);
//	return (a+b);
//	
//}

//with parameter and without return statement

//void sum(int x, int y); //declaration of the function
//
//int main(){
//	int a,b ;
//	printf("\n Enter two numbers:");
//	scanf("%d%d",&a,&b);
//
//	sum(a,b);
//	
//	
//}
//void sum(int x, int y){
//	int c;
//	c = x+y;
//	printf("\n Sum = %d",c);
//	
//}

//with parameter and  return statement

int sum(int x, int y); //declaration of the function

int main(){
	int a,b,c;
	printf("\n Enter two numbers:");
	scanf("%d%d",&a,&b);
	c = sum(a,b);
	printf("\n Sum = %d",c);

	
	
}
int sum(int x, int y){
	int c;
	return (x+y);
	
}








