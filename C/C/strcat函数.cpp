#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[30] = "task";
	char b[30] = "list";
	strcat_s(a, b);//把b的字符串拷贝到task的后面
	//strncat_s(a, b, 4);//拷贝指定个数的字符串
	system(a);
	getchar();

}