#include<stdio.h>
#include<Windows.h>
int main()
{
	int x = 100;
	//int *表示一个指向int类型的地址的指针变量
	int *p = &x;//p是一个指针变量，它可以指向任何一个地址
	printf("%d  %d\n", x, *p);
	*p = 200;
	printf("%d\n", *p);

	system("pause");
}