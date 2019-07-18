#include<stdio.h>
#include<Windows.h>
#include<time.h>
int main()
{
	int a[10];
	time_t t;
	srand((unsigned int)time(&t));
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		printf("%d\n", a[i]);
	}
	int *p = a;//假设一个数组的最大值为第一个元素
	for (int i = 0; i<10; i++)
	{
		if (a[i]<a[i + 1])
		{
			*p = a[i + 1];
		}
	}
	printf("最大值为%d\n", *p);
	system("pause");
}