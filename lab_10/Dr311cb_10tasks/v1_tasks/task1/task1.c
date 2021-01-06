#include<stdio.h>
#include<string.h>

int main()
{
	int n, i, j;
	char cuv[50][50];
	scanf("%d", &n);
	for (i=0;i<n;i++)
		scanf ("%s", cuv[i]);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			if (strcmp(cuv[i],cuv[j])<0)
			{
				char aux[50];
				strcpy(aux, cuv[i]);
				strcpy(cuv[i], cuv[j]);
				strcpy(cuv[j], aux);
			}
		}
	for (i=0;i<n;i++)
		printf ("%s\n", cuv[i]); 	
}