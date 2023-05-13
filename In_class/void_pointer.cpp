#include<stdio.h>
main()
{
	char ch='A';
	int x=100;
	
	void *p;
	p = &x;

	printf("int size = %d", sizeof(p));
	printf("\nInt Value= %d", *(int*)p);  //when we use void pointer then we have give the data type for the variable
	
	p=&ch;
	printf("\n\nchar size = %d", sizeof(p));
	printf("\nchar Value= %c", *(char*)p);    
	
	printf("\nchar Value= %d", (char*)p);  // it will print the address of ch
}

