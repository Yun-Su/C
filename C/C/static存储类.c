#include <stdio.h>
void func1(void);/* 函数声明 */
static int count = 10;  
/*C语言代码是以文件为单位来组织的，在一个源程序的所有源文件
中，一个外部变量（注意不是局部变量）或者函数只能在一个源程序中
定义一次，如果有重复定义的话编译器就会报错。伴随着不同源文件变量
和函数之间的相互引用以及相互独立的关系，产生了extern和static关键字。
 当一个进程的全局变量被声明为static之后，它的中文名叫静态全局变量。
 静态全局变量和其他的全局变量的存储地点并没有区别，
 都是在.data段（已初始化）或者.bss段（未初始化）内，
 但是它只在定义它的源文件内有效，其他源文件无法访问它。
 所以，普通全局变量穿上static外衣后，它就变成了新娘，已心有所属，
 只能被定义它的源文件（新郎）中的变量或函数访问。
---------------------
作者：keyeagle
来源：CSDN
原文：https://blog.csdn.net/keyeagle/article/details/6708077
版权声明：本文为博主原创文章，转载请附上博文链接！*/
int main()
{
	while (count--)
	{
		func1();
	}
	getchar();
	return 0;
}
void func1(void)
{
	/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
	 * 每次调用函数 'func1' 'thingy' 值不会被重置。
	 下次调用的时候会取上一次的值
	 */
	static int thingy = 5;
	thingy++;
	printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}