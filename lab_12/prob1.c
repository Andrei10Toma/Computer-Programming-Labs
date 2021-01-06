#include <stdio.h>

int main()
{
	int n1, n2, i, v1[50], v2[50], v[100], j, k=0, p;
	char input_filename[] = "in1.txt", output_filename[]="out1.txt";
	FILE *in=fopen(input_filename, "rt");
	FILE *out=fopen(output_filename, "wt");
	if (in==NULL)
	{
		fprintf(stderr, "Can't open %s", input_filename);
		return -1;
	}
	fscanf(in, "%d", &n1);
	for (i=0;i<n1;i++)
		fscanf(in, "%d", &v1[i]);
	fscanf(in, "%d", &n2);
	for (i=0;i<n2;i++)
		fscanf(in, "%d", &v2[i]);
	fprintf(out, "%d\n", n1+n2);
	i=0;j=0;
	while (i<n1 && j<n2)
	{
		if (v1[i]<v2[j])
		{
			v[k]=v1[i];
			k++;
			i++;
		}
		else
		{
			v[k]=v2[j];
			k++;
			j++;
		}
	}
	if (i<=n1)
	{
		for (p=i;p<n1;p++)
		{
			v[k]=v1[p];
			k++;
		}
	}
	if (j<=n2)
	{
		for (p=j;p<n2;p++)
		{
			v[k]=v2[p];
			k++;
		}
	}
	for (p=0;p<k;p++)
		fprintf(out, "%d ", v[p]);
	fprintf(out, "\n");
	fclose(in);
	fclose(out);
}