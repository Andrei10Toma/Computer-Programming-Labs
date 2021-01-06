#include <stdio.h>
#include <stdarg.h>

void compare(int a,...)
{
	if (a<0)
	{
		printf("Nu exista numere!\n");
		return;
	}
	va_list args;
	va_start(args, a);
	int curent=a;
	#ifdef MAX
	#define MAXi(a, b) a>b ? a:b
		int maxim=a;
		while(curent>=0)
		{
			maxim=MAXi(curent,maxim);
			curent=va_arg(args, int);
		}
	printf("%d\n", maxim);
	#endif
	#ifdef MIN
	#define MINi(a, b) a<b ? a:b
		int minim=a;
		while(curent>=0)
		{
			minim=MINi(curent, minim);
			curent=va_arg(args, int);
		}
	printf("%d\n", minim);
	#endif
}
int main()
{
	compare(120, 130, 4, 200, -1);
	return 0;
}