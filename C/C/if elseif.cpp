#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
void x(int a)
{
	if (a == 1)
	{
		printf("%d\n", a);
	}
	else if (a == 2)
	{
		printf("%d\n", a);
	}
	else if (a == 3)
	{
		printf("%d\n", a);
	}
	else
	{
		malloc(1024 * 1024 * 2);//��ϵͳ�����ڴ�
		printf("������ϵͳ�����ڴ�\n");
		Sleep(5000);//��ͣ5����
	}
}
int main()
{
	int a;
	while (1)
	{
		scanf_s("%d", &a);
		x(a);
	}
}