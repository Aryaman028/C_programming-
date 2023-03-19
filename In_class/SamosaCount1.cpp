#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double square(double num)
{
    return (num * num);
}

int main()
{
    float num;
    double a;
    printf("Input any number to find square : ");
    scanf("%f", &num);
    a = square(num);
    printf("Square of %.1f is : %.2f\n", num, a); 
    return 0;
}
