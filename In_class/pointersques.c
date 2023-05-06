#include<stdio.h>
void function(char**);
int main()
{
	char *arr[] = { "ant", "bat", "cat", "dog", "egg", "fly" };
	function(arr);
	return 0;
}
void function(char **ptr)
{
	char *ptr1;
	ptr1 = (ptr += sizeof(int))[-2];
	printf("%s\n", ptr1);
}
// output : cat