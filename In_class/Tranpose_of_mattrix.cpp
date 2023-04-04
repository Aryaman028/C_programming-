//***********************************************WAP TO FIND THE TRANSPOSE OF A MATTRIX*************************************************
#include <stdio.h>

int main(){
	int i,j,a[3][3],b[3][3];
	printf("Input elements in 1st mattrix --> \n");
	
	for(i =0;i<3;i++){
		for( j=0;j<3;j++){
			printf("input element in a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Your Mattrix-->\n");
	for( i =0;i<3;i++){
		for( j=0;j<3;j++){
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	printf("Tranpose of the above mattrix-->\n");

	for(i =0;i<3;i++){
		for( j=0;j<3;j++){
			b[i][j]=a[j][i];
			
		}
	}
	for( i =0;i<3;i++){
		for( j=0;j<3;j++){
			printf("%d\t",b[i][j]);	
		}
		printf("\n");
	}
	
}
//	printf("2nd Mattric--> \n");
//	for( i =0;i<2;i++){
//		for( j=0;j<2;j++){
//			printf("input element in b[%d][%d]:",i,j);
//			scanf("%d",&b[i][j]);
//		}
//		
//	}
//	printf("Sum of these two mattrix-->\n");
//
//	for( i =0;i<2;i++){
//		for( j=0;j<2;j++){
//			c[i][j]=a[i][j]+b[i][j];
//			printf("%d\t",c[i][j]);	
//		}
//		printf("\n");
//	}
	

