#include<stdio.h>
#include<Windows.h>
void check(int *p)
{
	for (int i = 0; i < 5; i++)
	{
		if (*(p+i) < 60)
		{
			printf("不及格的家伙成绩为%d\n", *(p+i));
		}
	}
}
int main()
{
	int *p = (int *)malloc(sizeof(int) * 5);
	for (int i = 0; i <5; i++)
	{
		scanf_s("%d",p + i);
	}
	check(p);
	system("pause");
}