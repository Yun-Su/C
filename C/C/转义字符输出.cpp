#include<stdio.h>
int main()
{
	printf("hello.world\n");
	puts("hello.world");//轻量级打印函数，它自带换行符哦，自动换行哦
	putchar('h');//用于输出char型或者int型数据，或者输出转义字符型，ascll码型之类的
	putchar('\n');//用于输出转义字符
	putchar(97);//输出了一个字符a
	putchar('a' - 32);//输出了一个字符A
	getchar();
	return 0;
}