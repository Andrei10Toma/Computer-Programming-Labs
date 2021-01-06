#include <stdio.h>

int main()
{
	int s=0, x;
	char input_filename[]="test0_data.in";
	FILE *in=fopen(input_filename, "rb");
	fread(&x, sizeof(int), 1, in);
	while (!feof(in))
	{
		s+=x;
		fread(&x, sizeof(int), 1, in);
		printf("%d\n", x);
	}
	printf("%d\n", s);
}