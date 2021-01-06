#include<stdio.h>
#define MAX_LENGTH 100

int isEven(int x)

{
	if (x%2!=0)
		return 1;
	else
		return 0;
}

void filter (int (*f) (int), int *v, int *n)

{
	int i, poz, j;
	for (i=0;i<*n;i++)
		if (f(*(v+i))==1)
			{
				poz=i;
				for (j=poz;j<*n-1;j++)
					*(v+j)=*(v+j+1);
				*n=*n-1;
			}
	for (i=0;i<*n;i++)
		printf ("%d ",v[i]);
	printf ("\n");

}

int main()
{
	int n, v[MAX_LENGTH],i;
	scanf ("%d", &n);
	for (i=0;i<n;i++)
		scanf ("%d", &v[i]);
	filter (isEven, v, &n);
}