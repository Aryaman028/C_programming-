#include<stdio.h>
#include<string.h>
 
int main() 
{
    char strg[20];
    printf("Enter a string : ");
    gets(strg);
    printf("Entered string is: %s\n",strg);
    int start=0,end=strlen(strg)-1;
 
    while(start<end)
    {
        // to swap characters at start and end
        char temp=strg[start];
        strg[start]=strg[end];
        strg[end]=temp;
 
        start++;
        end--;
    }
    printf("Reversed string is: %s",strg);
 
    return 0;
}