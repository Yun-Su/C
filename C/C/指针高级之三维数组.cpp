#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[2][3][4];
	int num = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				a[i][j][k] = num;
				num++;
				//printf("%-4d", a[i][j][k]);
			}
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				//printf("%-4d", a[i][j][k]);
				printf("%-4d", *(a[i][j] + k));
				//和a[i][j][k]完全等价
				//等价于 *(a[i][j]+k)
				//       *(*(a[i]+j)+k)  
				//       *(*(*(a+i)+j)+k)
				//
				//
			}
			printf("\n");
		}
		printf("\n");
	}

	getchar();
	return 0;
}