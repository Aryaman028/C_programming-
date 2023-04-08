#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,a[100],k=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        a[i]=a[i]%10;

    }
    for(i=0;i<n;i++){
         k+=a[i]*pow(10,n-1-i);
    }
    if (k%10==0)
        printf("yes");
    else
        printf("No");
    
    
    return 0;
}

