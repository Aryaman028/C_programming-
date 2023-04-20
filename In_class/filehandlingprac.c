#include<stdio.h>
#include<stdlib.h>
struct date{
    int day,month,year;
};
void main(){
    int n;
    struct date temp;
    FILE* fptr;
    if((fptr=fopen("welcome.bin","wb"))==NULL){
        printf("\n File is not created");
        exit(1);
    }
    for(n=1;n<=5;n++){
    temp.day=10+n;
    temp.month=2+n;
    temp.year=2020+n;

    fwrite(&temp,sizeof(struct date),1,fptr);
	//struct adrress-- size of it---no. of lines you wanna write---its pointer name
    }
    printf("\nFile is saved successfully");
    fclose(fptr);
}
