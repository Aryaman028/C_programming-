// for loop example

#include <stdio.h>

int main(){

    int i;

    for (i = 0; i < 7; i++) {

        if (i==3)
            continue; // will skip 3
        if (i==6)
            break; // terminates loop at 6
            // i.e output will be 0,1,2,4,5
         printf("%d\n", i);
    }

}