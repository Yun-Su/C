#include<stdio.h>
#include<Windows.h>
void check(int *p)
{
	for (int i = 0; i < 5; i++)
	{
		if (*(p+i) < 60)
		{
			printf("������ļһ�ɼ�Ϊ%d\n", *(p+i));
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