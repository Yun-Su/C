#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	double *p = (double *)malloc(x * sizeof(double));
	for (int i = 0; i < x; i++)
	{
		*(p+i)= i+1;
		printf("p[%d]=%lf,µØÖ·Îª%x\n", i, p[i], &p[i]);
	}
	system("pause");
}