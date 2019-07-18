#include<stdio.h>
#include<stdlib.h>
struct aaaa
//定义一个结构体aaaa
//aaaa并没有分配内存，要实例化才能访问

{
	int a[10];
	int d;
	int aaaa;
	//结构体成员名和类型名可以重复且不会混淆
};

struct aaaa a1, a2, a3;
//‘aaaa’为结构体类型
//'a1''a2''a3'为三个结构体变量
//类比 int a1,a2,a3;

#define hh struct bbbb
//define 本质为替换
//定义一个结构体bbbb
//用'hh'替换'struct bbbb'
hh
 {
	int a[10];
	int d;
};
hh b1,b2,b3;
//
struct cccc
{
	int a[10];
	int b;
}c1,c2,c3;
//直接在后面添加结构体变量也可以

int main()
{
	//'aaaa.num'无效，
	//aaaa是结构体类型，没有实例化，无法访问
	c3.b;
	//c3为实例化结构体变量，可以直接访问
}