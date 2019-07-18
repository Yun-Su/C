#include<stdio.h>
#include<Windows.h>
#include<stdarg.h>
double add(int num,...)
// ...代表可变参数
{
	double last = 0.0;
	va_list argp;
	//创建一个char类型的指针并存储地址
	va_start(argp, num);
	//从这里开始读取参数，读取num个参数
	//并把地址放在argp
	for (int i = 0; i <num;i++)
	{
		double temp = va_arg(argp,double);
		//读取参数，挨个读取
		printf("%f\n",temp);
		last+=temp;
	}
	va_end(argp);
	//结束读取
	return last;
}
int main()
{
	int x=10;
	double jieguo=0;
	jieguo=add(x,1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9,9.10,10.11);
	printf("%lf\n",jieguo);
	getchar();
}
