#include <stdio.h>
void slice(char name[],int n,int m);

int main(){
	char name[100];
	int n, m;
	printf("Enter the name for slicing:\n");
	scanf("%s",name);
	printf("\nlower range:");
	scanf("%d",&n);
	printf("\nupper range:");
	scanf("%d",&m);
	slice(name,n,m);
}
void slice(char name[],int n , int m){
	char updated[100];
	int j = 0;
	for(int i=n-1;i<m;i++){	
		updated[j]=name[i];
		j++;	
	}
	puts(updated);	
}
