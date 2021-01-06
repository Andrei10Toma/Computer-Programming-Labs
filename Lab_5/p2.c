#include<stdio.h>
#define MAX 100

int main()
{
	int pozitie, v[MAX], n, i;
	scanf ("%d%d", &n, &pozitie);
	for (i=0;i<n;i++)
		scanf ("%d", &v[i]);
	for (i=pozitie;i<n-1;i++)
		{
			v[i]=v[i+1];
		}
	n--;
	for (i=0;i<n;i++)
		printf ("%d ", v[i]);
	printf ("\n");
}