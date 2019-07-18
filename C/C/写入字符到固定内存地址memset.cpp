#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	char a[30] = "1234567890,ABCDEFGHIJK";
	memset(a,'A',10);//对指定地址的某个内存空间进行连续写入
	//地址，字符，个数，
	printf("%s", a);
	getchar();
}