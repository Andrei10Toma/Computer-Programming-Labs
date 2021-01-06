#include<stdio.h>
#define MAX_LENGTH 100

void reverse (int *v, int n)
{
	int i=0, aux;
	while (i<n/2)
	{	
		aux=*(v+i);
		*(v+i)=*(v+n-1-i);
		*(v+n-1-i)=aux;
		i++;
	}
	for (i=0;i<n;i++)
		printf ("%d ", v[i]);
	printf ("\n");
}

int main()
{
	int v[MAX_LENGTH], n, i;
	scanf ("%d", &n);
	for (i=0;i<n;i++)
		scanf ("%d", &v[i]);
	reverse (v, n);

}