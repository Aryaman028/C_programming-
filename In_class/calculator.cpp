#include<stdio.h>
int main()
{
   int n,a,b;
   double result;
   printf("Press 1 for addition \n");
   printf("Press 2 for Subtract \n");
   printf("Press 3 for Multiplication\n");
   printf("Press 4 for Divide\n");
   printf("Choose any one number-->\n");
   scanf("%d", &n);
   printf("Input 2 numbers-->\n");
   scanf("%d %d",&a,&b);
   
   switch(n){
     case 1:
    	result = a+b;
      printf("Your result is %lf",result);
     break;
     case 2:
     	result = a-b;
      printf("your result is %lf",result);
     break;
     case 3:
     	result = a*b;
      printf("your result is %lf",result);
     break;
     case 4:
     	result = a/b;
      printf("your result is %lf",result);
     break;
    
    default:
     printf("Invalid input");
     break;
    }
return 0;
}

