#include<stdio.h>
#include<stdlib.h>

void new_dim(int **initial, int n)
{
	int i, j;
	int **aux=malloc((n+2)*sizeof(int*));
	if (aux!=NULL)
		for (i=0;i<n+2;i++)
			aux[i]=(int *) calloc((n+2),sizeof(int));
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			aux[i][j]=initial[i][j];
	for (i=0;i<n+2;i++)
	{
		for (j=0;j<n+2;j++)
			printf ("%d ", aux[i][j]);
	}

}

int main()
{
	int n, i, j;
	int **a;
	scanf ("%d", &n);
	a=(int **) malloc(n*sizeof(int *));
	for (i=0;i<n;i++)
		a[i]=(int *) malloc(n*sizeof(int));
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf ("%d", &a[i][j]);
	new_dim(a, n);
}
