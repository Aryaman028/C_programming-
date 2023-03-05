#include <stdio.h>

int main(){
	int marks;
	printf("Enter your marks here-->");
	scanf("%d",&marks);
	printf("Your Grade will be-->");
	if (marks >= 90)
		printf("A");
	if  (marks >= 80 && marks < 90)
		printf("B");
	if  (marks >= 70 && marks < 80)
		printf("C");
	if  (marks >= 60 && marks < 70)
		printf("D");
	if  (marks >= 50 && marks < 60)
		printf("E");
	if  (marks < 50)
		printf("F");
	
	
	
	
	
	
}

