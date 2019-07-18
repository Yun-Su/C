#include<stdio.h>
#include<stdlib.h>
int main()
{
	//char a;
	//a = getchar();//getcahr()函数从键盘读入一个字符，并赋值给a
	//char b = getchar();//getchar()会把回车也当成一个字符
	//printf("%d,%d\n",a,b);
	char c, d;
	c = getchar();
	d = getchar();//getchar()函数一次只能读入一个字符；在运行的时候，会把所有操作都当作字符输入；
	putchar(c);
	putchar(d);
	system("pause");
}