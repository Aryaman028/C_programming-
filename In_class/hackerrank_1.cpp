#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[100],n,sum=0,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    
    
    return 0;
}
