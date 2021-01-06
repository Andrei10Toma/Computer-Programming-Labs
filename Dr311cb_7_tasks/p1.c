#include<stdio.h>

int main()
{
 	int N, i;
	scanf("%d", &N);
	for (i=N;i>0;i--)
		{
			if  ((i & (i-1)) == 0)
			{
				printf("%d\n", i);
				break;
			}
		}
	return 0;

}