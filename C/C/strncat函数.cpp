#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main1()
{
	char a[30] = "hello.world";
	char b[30] = "123456";
	strncat_s(a, b, 5);
	//���ַ���b�п���5���ַ���ӵ��ַ���a����
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
