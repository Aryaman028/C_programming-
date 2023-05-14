

#include <string.h>
#include <stdio.h>
// find the length of the sentence only counting alphabets
void printname(char a[]);
int main(){
	char str[100];
	int l;
	int count = 0;
	fgets(str,100,stdin);
	for(int i; str[i]!='\0';i++){
		if (str[i]!=' '){
		count++;
	}
	} 
	l = strlen(str) -1;
	printf("%d\n",l);
	printf("%d\n",count);
	puts(str);
	
	
}
