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
	int *p = a;//����һ����������ֵΪ��һ��Ԫ��
	for (int i = 0; i<10; i++)
	{
		if (a[i]<a[i + 1])
		{
			*p = a[i + 1];
		}
	}
	printf("���ֵΪ%d\n", *p);
	system("pause");
}