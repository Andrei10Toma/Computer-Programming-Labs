#include<stdio.h>
#include<stdlib.h>

void *my_realloc (int *initial, int old_size, int new_size)
{
	int *aux, i;
	if (old_size==new_size)
	{
		aux=(int *) malloc(old_size*sizeof(int));
		for (i=0;i<old_size;i++)
			aux[i]=initial[i];
		for (i=0;i<old_size;i++)
			printf("%d ", aux[i]);
		printf ("\n");			
	}
	if (old_size<new_size)
	{
		aux=(int *) calloc(new_size, sizeof(int));
		for (i=0;i<old_size;i++)
			aux[i]=initial[i];
		for (i=0;i<new_size;i++)
			printf ("%d ", aux[i]);
		printf("\n");
	}
	if (old_size>new_size)
	{
		aux=(int *)	malloc(new_size*sizeof(int));
		for (i=0;i<new_size;i++)
			 aux[i]=initial[i];
		for (i=0;i<new_size;i++)
			printf ("%d ", aux[i]);
		printf ("\n");
	}

}

int main()
{
	int old_size, new_size, i;
	scanf ("%d", &old_size);
	int *v=(int *) malloc(old_size*sizeof(int));
	for (i=0;i<old_size;i++)
		scanf ("%d", &v[i]);
	scanf ("%d", &new_size);
	my_realloc(v, old_size, new_size);
}