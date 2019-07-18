#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10, b = 100;
	int *p;
	int x;
	printf("%x  %x", &a, &b);
	scanf_s("%x", &x);//????????
	p = (int *)x;//将一个数值强制转换为指针的地址
	*p = 3;
	printf("%d   %d", a, b);
	system("pause");
}