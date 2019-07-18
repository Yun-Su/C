#include <stdio.h>
int count;
extern void write_extern();
//extern 存储类用于提供一个全局变量的引用，
//全局变量对所有的程序文件都是可见的。
//当您使用 'extern' 时，对于无法初始化的变量
//会把变量名指向一个之前定义过的存储位置。
int main()
{
	count = 5;
	write_extern();
	getchar();
	return 0;
}