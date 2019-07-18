#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	char a[10];
	char b;
	int c[3];//实例化以后要输入三个参数
	int e;
}a1 = { "123a1",'4',56,78,910,25};
//初始化结构体成员
int main()
{
	//struct aaa a1, a2, a3;
	//也可以这样初始化结构体变量
	struct aaa a2 = { "abc",'d',45,47,6,98};
	//初始化结构体成员
	//？？？？？？？？？？？？？？？
	printf("%d\n%s\n%c\n",
		a1.e,
		a1.a,
		a1.b);
	getchar();
}