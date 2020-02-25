#include<stdio.h>
#include<Windows.h>
#include<stdarg.h>//可变参数对应的头文件
int add(int num,...)
// ...代表可变参数
{
	int last = 0;
	va_list p;
	//创建一个char类型的指针
	va_start(p, num);
	//从这里开始读取参数，读取num个参数
	//并把地址放在p
	for (int i = 0; i <num;i++)
	{
		int temp = va_arg(p,int);
		//读取参数，挨个读取
		printf("%d\n",temp);
		last+=temp;
	}
	va_end(p);//结束读取
	return last;
}
int main()
{
	int x=4;
	printf("结果是%d\n", add(x, 1, 2, 3, 4));
}
