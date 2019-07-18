#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	int num1;
	char str1[100];
	//在结构体内嵌套一个结构体，但没有创建结构体的实例
	//结构体内部的变量会被当成母结构体的成员变量
	struct bbb
	{
		int num2;
		char str2[100];
	};
};
int main()
{
	struct aaa a1;
	a1.num1 = 100;
	a1.num2 = 20;
	//c++的语法规范下不能
	//a1为bbb的结构体成员
	printf("%d", a1.num2);
	
	getchar();
	getchar();
}