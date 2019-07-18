#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[6][3][5];
	for (int i = 0; i <90; i++)
	{
		a[i/15][(i/5)%3][i%5] = i;
		printf("a[%d][%d][%d]=%d\n",i/15,(i/5)%3,i%5,a[i/15][(i/5)%3][i%5]);
	}
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		for (int k = 0; k < 3; k++)
	//		{
	//			printf("%-3d", a[i][j][k]);
	//		}
	//		printf("\n");
	//	}
	//	printf("\n");
	//}
	system("pause");
}