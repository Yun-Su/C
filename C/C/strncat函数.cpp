#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main1()
{
	char a[30] = "hello.world";
	char b[30] = "123456";
	strncat_s(a, b, 5);
	//从字符串b中拷贝5个字符添加到字符串a里面
	printf("%s", a);
	getchar();
	return 0;
}
int main2()
{
	char c[30] = "task";
	char d[30] = "list23456";
	strncat_s(c, d, 4);
	system(c);
	getchar();
}
