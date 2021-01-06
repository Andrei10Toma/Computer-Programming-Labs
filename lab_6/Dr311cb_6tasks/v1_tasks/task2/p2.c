#include<stdio.h>
#define MAX_L 100
#define MAX_C 100

int main()
{
	int n, m, i, j, a[MAX_L][MAX_C];
	scanf ("%d%d", &n, &m);
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
			scanf ("%d", &a[i][j]);
	}
	for (i=0;i<n;i++)
	{
		if (i%2==0)
			{
				for (j=0;j<m;j++)
					if (i==n-1 && j==m-1)
						printf ("%d",a[i][j]);
					else
						printf ("%d ",a[i][j]);
			}
		else
			{
				for (j=m-1;j>=0;j--)
					if (i==n-1 && j==0)
						printf ("%d",a[i][j]);
					else
						printf ("%d ", a[i][j]);
			}
	}
	printf ("\n");
	return 0;

}