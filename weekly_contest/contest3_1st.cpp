#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    
    
    for(int i = 1; i<=n;i++){
        scanf("%d %d",&w,&h);
        if ((l > w) || (l > h))
        {
            printf("UPLOAD ANOTHER \n");
        }
        else if (w != h)
        {
            printf("CROP IT \n");
        }
        else
        {
            printf("ACCEPTED \n");
        }
            
    }
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

