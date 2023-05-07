#include <stdio.h>

int main(){
	FILE *fp;
	char s1[100];
	char ch;
	fp = fopen("aryaman.txt","r+");
//	scanf("%c",&ch);
//	while(ch!='.'){
//		fputc(ch,fp);
//		scanf("%c",&ch);
//	}
	
	fseek(fp,10,1);
	fgets(s1,11,fp);
	printf("the content you want is: %s",s1);
	
	fclose(fp);
}
