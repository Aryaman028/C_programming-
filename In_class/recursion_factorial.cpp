#include <stdio.h>
int fact(int x){
	if (x <= 1)
		return 1;
	else{
	int p;
	p = x * fact(x-1);
	printf("%d",p);
	}
}
int main(){
	int n,result;
	scanf("%d",&n);
	result=fact(n);
//	printf("%d",result);
}
