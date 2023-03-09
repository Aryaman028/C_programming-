//#include <stdio.h>
//int swap (int *x, int *y) // definition
//{
//int t;
//printf("\n In function Before: Values of X = %d and Y = %d",x,y);
//t=*x;
//*x=*y;
//*y=t;
//printf("\n In function After: Values of X = %d and Y = %d",x,y);
//}
//int main()
//{
//int a,b;
//printf("\n Enter two numbers:");
//scanf("%d%d", &a,&b);
//printf("\n Before: Values of a = %d and b = %d",a,b);
//swap(&a,&b);
//printf("\n\n After: Values of a = %d and b = %d",a,b);
//}




#include <stdio.h>
int swap (int x, int y) // definition
{
int t;
printf("\n In function Before: Values of X = %d and Y = %d",x,y);
t=x;
x=y;
y=t;
printf("\n In function After: Values of X = %d and Y = %d",x,y);
}
int main()
{
int a,b;
printf("\n Enter two numbers:");
scanf("%d%d", &a,&b);
printf("\n Before: Values of a = %d and b = %d",a,b);
swap(a,b);
printf("\n\n After: Values of a = %d and b = %d",a,b);
}





