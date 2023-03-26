#include <stdio.h>
void power(int n , int m);

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	
	power(n,m);
}
void power(int n, int m){
	int p=1;
	for(int i=1;i<=m;i++){
		p = p*n;
	}
		printf("%d",p);
	
}
