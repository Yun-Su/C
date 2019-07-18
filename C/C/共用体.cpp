#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
union aaa
{
	int a;
	char b;
	char c[30];
};
int main()
{
	union aaa a1;
	a1.a = 100;
	a1.b ='w';
	sprintf_s(a1.c,"asdfghjkl");
	printf("%s\n",a1.c);
	//共用体变量任何时刻只有一个成员存在???????????
	//每次只能访问其中一个成员。
	//每个共同体变量内部所有成员共享同一段内存空间
	printf("共用体大小为%d\n",sizeof(a1));
	//共用体变量的大小==共用体成员占内存最大的那个
	getchar();
}