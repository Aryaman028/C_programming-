#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,r,k,s;
    scanf("%d %d %d", &l,&r,&k);
    for (int i=l;i<=r; i++){
        if (i % k==0)
            s += 1;
    }
    printf("%d",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

