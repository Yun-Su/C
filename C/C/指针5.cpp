#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10, b = 12;
	int *pa = &a, *pb = &b, **px = NULL;//指针不只是一个地址
	//还决定了往前读几个字节，用什么方式解析一个内存空间里的二进制数据
	//pa = pb;
	//*pa = *pb;
	px = &pb;
	
	printf("%d\n", **px);
	system("pause");
}