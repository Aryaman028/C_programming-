#include<stdio.h>
int main()
{
	struct num 
	{
	int i, j, k, l;
	};
	struct num n = {1, 2, 3};
	printf("%d %d %d %d", n.i, n.j, n.k, n.l);
}

// 1,2,3,0