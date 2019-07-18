#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	char a[10] = "abcde";
	char b[20] = "12345";
	memcpy(a, b, 2);
	//将b字符串的前两个字节两个字节两个字节写入到字符串a的前两个中
	printf("%s\n%s,\n", a,b);
	getchar();
}