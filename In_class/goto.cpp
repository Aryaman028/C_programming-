#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int a;
        printf("enter a number : ");
        scanf("%d",&a);

        if (a%2==0)
        goto Label1;

        else
        goto Label2;

        Label1:
        printf("even");
        return;
        Label2:
        printf("odd");
   }
