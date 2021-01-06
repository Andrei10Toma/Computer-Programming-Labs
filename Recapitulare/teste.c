#include <stdio.h>
#include <stdlib.h>

int f()
{
	static int c;
	return ++c;
}

int main(void)
{
	printf("%d\n", f());
	printf("%d\n", f()+f());
	return 0;
}