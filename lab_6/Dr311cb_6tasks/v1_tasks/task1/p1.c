#include<stdio.h>
#define MAX_L 100
#define MAX_C 100
#define MIN 9999
#define MAX -9999

int main()
{
	int n,m,i,j,a[MAX_L][MAX_C],min,max;
	scanf ("%d%d", &n, &m);
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf ("%d", &a[i][j]);
	for (i=0;i<n;i++)
	{
		min=MIN;max=MAX;
		for (j=0;j<m;j++)
		{
			if (i%2==0)
				{
						if (a[i][j]<min)
							min=a[i][j];
				}
			else
				{
					if (a[i][j]>max)
						max=a[i][j];
				}
		}
		if (i%2==0)
			printf ("%d: min = %d\n", i+1, min);
		else
			printf ("%d: max = %d\n",i+1, max);
	}
	return 0;

}