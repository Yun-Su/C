#include<stdio.h>
int main()
{
	int a = 2, b=2;
	printf("%d\n", 0 && ++a);//短路表达式，只要一个条件为假，后面条件不再判断，所以a依然为2
	printf("%d\n", a);
	printf("%d\n", 0 || ++b);//b被引用，b的值发生改变
	printf("%d\n", b);
	//printf("%d\n", 0 || b = 3);//关系运算符高于赋值符号，所以此表达式的运算方式为0||b比较,再比较与2的值，正确方式应该为0||(b=3)

	getchar();
	return 0;
}