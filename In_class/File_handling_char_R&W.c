#include <stdio.h>

//writing into the file
//main(){
//	FILE *fp;
//	char ch;
//	fp = fopen("data.txt","w");
//	scanf("%c",&ch);
//	while(ch!='.')
//	{
//		fputc(ch,fp);
//		scanf("%c",&ch);
//	}
//	fclose(fp);
//}

//reading from the file

main(){
	FILE *fp;
	char ch;
	fp = fopen("Aryaman.txt","r");
	scanf("%c",ch);
	while(ch!=EOF){
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}
