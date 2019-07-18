#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	int a;
	char b;
	int c;
}a1[3] = { {1,'a',3}, {2,'6',2}, {3,'9',4} };
//创建了一个结构体数组变量
//并进行了初始化
struct
{
	int a;
	char b;
}b1[20];
//创建了一个匿名结构体数组变量
struct ccc
{
	int a;
	int b;
};
int main()
{
	struct ccc c1[20];
	//创建一个结构体数组
	//结构体数组在内存中连续排列
}