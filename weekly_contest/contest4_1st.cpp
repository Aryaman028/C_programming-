#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	printf("To get the sum of digits of ")
	
    int n, sum,l, d;
    scanf("%d", &n);
    l = 5;
    for(int i=1; i <= l ; i++){
        d = n % 10;
        sum += d;
        n = n / 10;
        
    }
    printf("%d",sum);
    
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
