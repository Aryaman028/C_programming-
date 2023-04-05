#include <stdio.h>
 int main()
 {
// 	int arr[];  //we cant use empty square bracket while declaring

//  (initilizing while declaring)

// 	int arr[]={1,2,3,4,5};     //as we are initializing here thus we can use empty brackets

	int arr[2]={1,2,3,4,5};    //we cant assign elements more than the size of the array
	
// 	int arr[0];  //we can add elements more than the size of the array 
 	//initilizing one element at time of array
// 	arr[0]=20;
// 	arr[1]=2;
 	printf("%d",&arr[1]);
 	
 	//initilizing array using for loop
 	
 return 0;
 }
