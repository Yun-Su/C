#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	char a[30] = "123aBC789";
	char b[30] = "123abcABCD";
	int num=_memicmp(a, b,6);

	//比较字符串a,b的前6个字符是否相等
	//忽略大小写
	//并返回一个值,相等返回0，不相等返回-1
	printf("%d", num);
	getchar();
}