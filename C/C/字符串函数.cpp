#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p = "title china is big";
	//把字符串赋值给指针
	//printf("%p", p);
	char *str = p;
	//存储字符串的指针变量
	while (*p)
	{
		putchar(*p);
		p++;//？？？？？？？？？？？？？？？？？

	}
	system(str);
	system("pause");
}