#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,p=1;
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++ ){
        p *= i;
        
    }
    printf("%d",p);
    return 0;
}

