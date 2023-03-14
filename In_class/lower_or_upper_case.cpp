#include <stdio.h>

int main( ) {
	char ch;
	printf("enter character:");
	scanf("%s",&ch);
	if(ch>='a' && ch<='z'){
		printf("entered character is LOWER case letter");
	}
	else 	printf("entered character is UPPER case letter");

}
