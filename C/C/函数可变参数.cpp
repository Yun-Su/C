#include<stdio.h>
#include<Windows.h>
#include<stdarg.h>//可变参数对应的头文件
int add(int num,...)
// ...代表可变参数
{
	int last = 0;
	va_list p;//等价于 char *p 的typedef形式
	va_start(p, num);
	//从这里开始读取参数，读取num个参数
	//并把地址放在p
	for (int i = 0; i <num;i++)
	{
		int temp = va_arg(p,int);
		//读取指针对应的数据，用int型格式
		printf("%d\n",temp);
		last+=temp;
	}
	va_end(p);//结束读取
	return last;
}
/*几个要素
f(int x,...)
va_list -----char *p
va_start(p,x)   ---读取x个地址存入p
va_arg(p,int)  -----读取指针对应数据, 指定int形式
va_end(p)       ----停止读取
*/
int main()
{
	int x=4;
	printf("结果是%d\n", add(x, 1, 2, 3, 4));
}
