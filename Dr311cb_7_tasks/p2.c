#include<stdio.h>

int main()
{
	int n, m, i, nr=0;
	scanf ("%d%d", &n, &m);
	int x=n^m;
	for (i=0;i<=sizeof(int)*8;i++)
	{
		if ((1<<i & x)!=0)
			nr=nr+1;
	}
	printf("%d\n", nr);
	return 0;
}