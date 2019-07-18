#include<stdio.h>
#include<stdlib.h>
struct
{
	int a;
	char b;
}a1, a2;
//只能通过这种方式创建无名结构体变量
//无名结构体用于限量创建无名结构体变量
int main()
{
	a1.a = 100;
	a1.b = 'X';
	printf("%d,%c", a1.a, a1.b);
	getchar();
}