#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct nameinfo
//结构体，把不同数据组合成一个整体
//nameinfo  结构体类型的名字，省略后成为无名结构体
//struct  结构体关键字，
{
	char name[50];
	char phone[50];
	int num;
};
int main()
{
	struct nameinfo  abcd;
	//创建一个结构体变量abcd
	abcd.num = 100;
	//对结构体进行赋值
	printf("结构体的编号为%d\n", abcd.num);
	//abcd.phone="asdfgh"不可以
	//字符串是一种特殊类型，不能用'='直接赋值
	//以下方式可以对字符串结构体赋值
	sprintf_s(abcd.name,"hello.world");
	strcpy_s(abcd.phone,"123456789");
	printf("结构体变量为%s\n结构体变量为%s\n", abcd.name, abcd.phone);
	system("pause");
}