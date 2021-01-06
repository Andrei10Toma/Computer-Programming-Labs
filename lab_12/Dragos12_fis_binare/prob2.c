#include <stdio.h>

int main()
{
	int s=0, x;
	char input_filename[]="Dragos12_fis_binare/test0_data.in";
	FILE *in=fopen(input_filename, "rb");
	while (!feof(in))
	{
		fread(&x, sizeof(int), 1, in);
		printf("%d\n", x);
		s+=x;
	}
	printf("%d\n", s);
}