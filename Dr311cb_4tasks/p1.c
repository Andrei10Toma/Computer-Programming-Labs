#include<stdio.h>
void fact_prim(int x, int d)
{ 
	while (x%d==0)
		x/=d;
	printf ("%d ", d);
	if (x>d)
		fact_prim(x, d+1);
}		

int main()
{
	int x, d=2;
	scanf ("%d\n", &x);
	fact_prim(x, d);
}