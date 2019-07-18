#include<stdio.h>
#include<Windows.h>
int main()
{
	int x, y;
	scanf_s("%d%d", &x, &y);
	int **pp =(int **)malloc(sizeof(int *)*x);
	for (int i = 0; i < x; i++)
	{
		pp[i]=(int *)malloc(sizeof(int)*y);
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			pp[i][j] = (i + 1) * 10 + j;
			printf("%4d", pp[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < x; i++)
	{
		free(pp[i]);
		pp[i] = NULL;
	}
	free(pp);
	pp = NULL;
	
	system("pause");
}