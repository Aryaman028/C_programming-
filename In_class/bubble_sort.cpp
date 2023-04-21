#include<stdio.h>
void display(int br[], int s);
int main()
{
int ar[100],n,j,i;
printf("number of elements:");
scanf("%d", &n);


for(i=0; i<n; i++)
{
	printf("%d Element",i);
scanf("%d", &ar[i]);
}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if (ar[j]>ar[j+1]){  
		
		
		int temp =ar[j];
		ar[j]=ar[j+1];
		ar[j+1]=temp;
		}
	}
}
display(ar,n);
}

void display(int br[], int s){
	for(int i=0; i<s; i++){
		printf("%d ", br[i]);
	}
}
	

