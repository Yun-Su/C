#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct aaa
{
	int a;
	char b;
	char c[30];
};
void change(struct aaa a1)
//尽量不要使用结构体作为参数，浪费内存
{
	a1.a = 1000;
	//此处的值不会改变原来的值
	//且两个结构体变量的成员在不同的内存地址中
}
int main()
{
	struct aaa a1;
	a1.a = 100;
	change(a1);

	printf("%d", a1.a);
	getchar();
}