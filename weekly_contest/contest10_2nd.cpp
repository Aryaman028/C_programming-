#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,x[100],i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
    }
    if(a<5 || a>50)
        printf("Invalid input");
    else
        for(i=0;i<a;i++){
        if(x[i]%5==0)
            printf("%d\n",x[i]);
    }
    return 0;
}
