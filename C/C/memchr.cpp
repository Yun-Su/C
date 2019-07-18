#include<stdio.h>
#include<string.h>
int main()
{
	char a[20] = "asdfghjkl";
	char b= 'd';
	char *p=(char *)memchr(a,'w',10);
	//从地址a开始10个字节以内查找字符'q'
	//自动返回一个地址;
	printf("%c,%x", *p,p);
	getchar();
}