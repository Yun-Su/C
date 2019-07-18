#include<stdio.h>
#include<Windows.h>
#include<time.h>
//int main()
//{
//	int a[10][10];
//	time_t t;
//	int x=0;//计算值
//	srand((unsigned int)time(&t));
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			a[i][j] = rand()%100;
//			printf("a[%d][%d]=%-4d", i, j, a[i][j]);
//			if (i ==j||(i+j==9))
//			{
//				x += a[i][j];
//			}
//		}
//		printf("\n");
//	}


//	int main()
//	{
//		int a[10][10];
//		
//		int x = 0;//计算值
//
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 10; j++)
//			{
//				a[i][j] = i*10+ j;
//				printf("%-4d",a[i][j]);
//				if (i == j || (i + j == 9))
//				{
//					x += a[i][j];
//				}
//			}
//			printf(" \n");
//		}
//
//	printf("x=%d", x);
//	system("pause");
//}


int main()
{
	int a[5][4][3];
	time_t t;
	srand((unsigned int)time(&t));
	for(int i = 0; i < 60; i++)
	{
		a[i/12][(i/5)%4][i%3] =i;
		printf("a[%d][%d][%d]=%d\n",i/12,(i/15)%4,i%3,i);
	}
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("a[%d][%d][%d]=%-3d   ",i,j,k,a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}*/
	system("pause");
}