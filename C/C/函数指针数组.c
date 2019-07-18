#include<stdio.h>
int jia(int a, int b)
{
	return a + b;
}
int jian(int a, int b)
{
	return a - b;  
}
int cheng(int a, int b)
{
	return a * b;
}
int chu(int a, int b)
{
	return a / b;   
}

int main()
{
	int *px[10];//一个指针数组
	int(*p)(int a, int b);//一个函数指针
	//int(*pp[4])(int e, int f);
	//一个函数指针数组,每个元素都是一个函数指针
	int(*pp[4])(int e, int f) = { jia,jian,cheng,chu };
	//函数指针数组的初始化
	//同一类型的函数,可以用数组统一管理函数地址,然后进行调用
	int c = 100;
	int d = 20;
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n",(*pp[i])(c, d));
		//printf("%d\n", pp[i](c, d));
		//输出值一样?????
	}
	getchar();
	return 0;
}
