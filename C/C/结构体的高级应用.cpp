#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	int a;
	char c[5];
};
int main()
{
	struct aaa a1;
	printf("%d", sizeof(a1));
	//结构体变量的大小发生了内存对齐
	//由9个字节填充到12个字节
	getchar();
}