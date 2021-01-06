#include <stdio.h>
#include <stdlib.h>

void print(struct deque s)
{
	int i;
	for (i=0;i<top;i++)
		printf("%s", s.elements[i]);
	printf("\n");
}

int main()
{
 	struct deque
	{
		int top;
		char elements[100][31];
	}deque;
	int n, i, j;
	char req[100];
	scanf ("%d", &n);
	for (i=0;i<n;i++)
	{
		fgets(req, 100, stdin);
		if (strncmp(req, "push", strlen("push"))==0)
		{
			char *word=strchr(req, ' ');
			word(strlen(word)-1)='\0';
		}
}