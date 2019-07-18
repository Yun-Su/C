#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b,c;
	scanf_s("%d,%d,%d", &a, &b, &c);
	//在输入字符的时候，要一并输入‘，’否则会报错。
	printf("%d,%d,%d,\n", a, b, c);
	scanf_s("%d,%d,%d   ", &a,&b,&c);
	//后面有空格，需要随机输入一堆数字然后回车才能运行
	//如果前面用空格系统会自动忽略
	printf("%d,%d,%d", a, b, c);


	//int d=1;
	//int f;
	//scanf_s("%d", &d);  
	//编译器会把字符‘d‘1当作一个内存地址去初始化，
	//1是windows操作系统的内存地址，然后就报错了
	//scanf_s("%d", f); 
	//这个是因为没有传入地址而报错。
	system("pause");
}