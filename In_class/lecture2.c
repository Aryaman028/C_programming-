#include <stdio.h>
int main()
{
	char ch;
	ch ='A';
	printf("%d",sizeof(ch));
	printf("\nSize = %d B", sizeof(char));
	printf("\nValue = %c",ch);
	printf("\nAddress = %d", &ch);
}
