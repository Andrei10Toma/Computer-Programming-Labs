#include<stdio.h>

int main()
{
	float x;char y;
	scanf("%c\n", &y);
	scanf("%f", &x);
	switch (y) 
	{
		case 'C': 
			printf("C:%f F:%f K:%f", x, x+32, x+273);break;
		case 'F': 
			printf("C:%f F:%f K:%f", x-32, x, x+241);break;
		case 'K':
			printf("C:%f F:%f K:%f", x-273, x-241, x);break;
		default:
			printf("Optiune inexistenta");
			break;
	}
	return 0;
}