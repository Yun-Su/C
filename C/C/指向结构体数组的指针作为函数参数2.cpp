#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
struct aaa
{
	int a;
	char b;
	char c[30];
};
void change(struct aaa a1[1])
//结构体变量的成员做参数    值传递
//结构体变量的指针或者数组做参数  参数传递
//结构体变量做参数               多值传递，效率低下
{
	a1[1].a =6;
	a1[2].a = 123;
	
}
int main()
{
	struct aaa a1[3];
	a1[1].a =5;
	struct aaa *p = a1;
	change(p);
	printf("%d,%d", a1[1].a,a1[2].a);
	system("pause");
}