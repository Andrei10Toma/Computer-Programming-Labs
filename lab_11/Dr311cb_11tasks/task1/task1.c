#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float calcul_modul(int a, int b)
{
	return sqrt(pow(a,2) + pow(b,2));
}

int main()
{
	int n, i, j;
	double result[100];
	struct complex
	{
		int re;
		int im;
		float result;
	}mod[100],aux;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("\n(%d, %d)", &mod[i].re, &mod[i].im);
		mod[i].result=calcul_modul(mod[i].re, mod[i].im);
	}
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			{
			if (mod[j].result>mod[i].result)
				{
					aux=mod[i];
					mod[i]=mod[j];
					mod[j]=aux;
				}
			else
				if ((mod[j].result==mod[i].result) && (mod[i].re<mod[i].im))
				{
					aux=mod[j];
					mod[j]=mod[i];
					mod[i]=aux;
				}
			}
	for (i=0;i<n;i++)
	{
		printf ("(%d, %d)\n", mod[i].re, mod[i].im);
	}
	return 0;
}