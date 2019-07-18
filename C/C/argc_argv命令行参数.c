#include<stdio.h>
int main(int argc, char *argv[])
//一般情况下,main函数没有参数
//int argc,char *argv[]是main函数的形参
//argc统计传入的指针数组的个数
{
	printf("%d\n", argc);
	
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		//在执行程序的时候,经过了预处理 编译 汇编 链接四个过程
		//完成以上过程以后会生成一个可执行的文件,
		//执行程序以后,操作系统会调用main函数
		//然后main函数在执行时会调用其它函数来完成程序的功能
		//printf() main函数在进行调用的时候传入的参数,也就是文件所在位置
	}
	getchar();
}