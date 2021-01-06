#include<stdio.h>

int main()
{
	int n, i, x, s=0;
	scanf("%d", &n);
	for (i=0;i<=n;i++)
		{
			scanf("%d",&x);
			s+=x;
		}
	printf("Numarul duplicat este %d", (n*(n+1))/2-s);
	return 0;
}