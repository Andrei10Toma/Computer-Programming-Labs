#include<stdio.h>
#define VARSTA_MAX 151
#define MAX 100

int main()
{
	int fr[VARSTA_MAX]={0}, v[MAX], i, n;
	scanf ("%d", &n);
	for (i=0;i<n;i++)
		{
			scanf ("%d", &v[i]);
			fr[v[i]]=fr[v[i]]+1;
		}
	for (i=1;i<VARSTA_MAX;i++)
		if (fr[i]!=0)
			printf ("%d-%d\n", i, fr[i]);
	return 0;
}