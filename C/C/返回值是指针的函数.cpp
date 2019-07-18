#include<stdio.h>
#include<Windows.h>
int a = 10;
int b = 20;
int * go()  //一个返回值是指针的函数
{
	return &a;
}
int main()
{
	printf("%d\n", *(go()));
	system("pause");
}