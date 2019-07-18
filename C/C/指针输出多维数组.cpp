#include<stdio.h>
#include<Windows.h>
#include<time.h>
void sz(int (*p)[4])
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%-5d", *(*(p + i) + j));
		}
		printf("\n");
	}

}
void main()
{
	int a[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] =i*10+j;
		}
		printf("\n");
	}
	//int (*p)[4] = a;//新建一个指向四个元素为一组的一维数组的指针
	//a是一个行指针，指向第一行的四个元素
	sz(a);
	system("pause");
}