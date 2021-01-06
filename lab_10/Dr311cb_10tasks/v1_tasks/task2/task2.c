#include<stdio.h>
#include<string.h>
#define MAX_LEN 400

int main()
{
	int i, n=0, c1, c2, max=-1, j	;
	char a[MAX_LEN], cuv[100][100];
	fgets (a, 1000, stdin);
	char *p=strtok (a," .\n");
	while (p!=NULL)
		{
			strcpy(cuv[n],p);
			n++;
			p=strtok(NULL," .\n");
		}

	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		{	
			c1=strlen(cuv[i]);
			c2=strlen(cuv[j]);
				if (c1+c2>max && cuv[i][c1-1]==cuv[j][c2-1] && cuv[i][c1-2]==cuv[j][c2-2])
					max=c1+c2;
		}
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
	{
			c1=strlen(cuv[i]);
			c2=strlen(cuv[j]);	

			if ((c1+c2==max) && cuv[i][c1-1]==cuv[j][c2-1] && cuv[i][c1-2]==cuv[j][c2-2])
				{
					if (strcmp(cuv[i],cuv[j])<0)
						printf("%s %s\n", cuv[i], cuv[j]);
					else 
						if (strcmp(cuv[i],cuv[j])>0)
							printf("%s %s\n", cuv[j], cuv[i]);
				}
	}
	return 0;
}