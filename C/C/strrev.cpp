#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[20] = "123456";
	_strrev(a);
	//逆转字符串里的每个字符
	printf("%s", a);
	getchar();
	getchar();
}