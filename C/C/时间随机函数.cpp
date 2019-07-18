#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>//使用一个时间的函数库
int main()
{
	//while (1)
	//{
	//int a = rand();//随机函数,但是每次运行随机数都是一样；
	//printf("%d\n", a);
	//Sleep(5000);
	//}
	while (1)
	{
	time_t ts;//使用一个时间函数，
	srand((unsigned int)time(&ts));//限定使用时间作为随机数种子
	unsigned int a=rand();
	printf("%d\n", a);
	Sleep(1000);
	}
}