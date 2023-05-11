#include <stdio.h>
void printname(char a[]);
int main(){
	char firstname[] = "Aryaman";
	char lastname[] = "Agrawal";
	char name[40];
	scanf("%s",name);
//	printf("%s",name);
	printf("%s %s \n",firstname,lastname); // by this we can easliy print the string withoiut using any loop
	printname(name);
//	printname(lastname);
}
void printname(char a[]){ //in this function calling we dont have to give the size of the array
//	puts(a); //we can do this directly
	for(int i = 0; a[i]!='\0';i++){
		printf("%c",a[i]);
	}printf("\n");
}
