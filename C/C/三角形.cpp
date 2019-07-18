#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[10][10] = {0};
	for (int i = 0; i <10; i++)
	{
		for (int j = 0; j <10; j++)
		{
			if (j==0|| i==j)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}
	for (int i = 0; i <10; i++)
	{
		for (int j = 0; j <10; j++)
		{
			if (j==0)
			{
				printf("%*d", 20 - 2 * i, a[i][0]);
			}
			else
			{
				printf("%4d", a[i][j]);
	 		}
		}
		printf("\n");
	}
	system("pause");
}