#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union aaa
{
	int a;
	char c[5];
};
int main()
{
	union aaa a1;
	printf("%d", sizeof(a1));
	//c[5]为5个字节大小
	//a为4个字节大小
	//共用体的大小必须为共用体成员大小的整数倍
	//否则会自动填充字节
	getchar();

}