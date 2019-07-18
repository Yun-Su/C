#include<stdio.h>
#include<Windows.h>
void showa(int *p)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%3d\n",p[i]);
	}
}
void showb(int (*p)[4])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%-3d", p[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int b[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//showa(a);
	showb(b);
	system("pause");
}