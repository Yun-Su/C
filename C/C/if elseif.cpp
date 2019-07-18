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
		malloc(1024 * 1024 * 2);//向系统申请内存
		printf("正在向系统申请内存\n");
		Sleep(5000);//暂停5秒钟
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