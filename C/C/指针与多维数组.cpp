#include<stdio.h>
#include<windows.h>
void aver(int (*p)[4])
{
	double res = 0;
	//计算3组数据的平均值。
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			res += p[i][j];
		}
	}
	printf("%lf", res/12);
}
void st(int(*p)[4])
{
	int c;
	scanf_s("%d", &c);
	for (int i = 0; i < 4; i++)
	{
		printf("%3d", *(*(p + c) + i));
	}
}
void bjg(int(*p)[4])
{
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("%3d", p[i][j]);
	//	}
	//	printf("\n");
	//}
	int a = 0;
	int x = 0;
	for(int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (*(*(p + i) + j) < 60)
			{
				a += 1;
				x = i;
			}
		}
	}
	if (a >= 1)
	{
		for (int i = 0; i < 4; i++)
		{
			printf("不及格成绩的家伙的各科成绩为%3d\n", *(*(p + x) + i));
		}
	}
}
void main()
{
	int a[3][4] = { {60,61,62,63},{72,23,34,56},{80,81,59,83} };
	//aver(a);
	//st(a);
	bjg(a);
	system("pause");
}