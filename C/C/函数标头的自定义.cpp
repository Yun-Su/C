#include<stdio.h>//标准函数库
#include<stdlib.h>//windows系统函数库
int main()
{
	printf("hello.world\n");
#include"标头.h"  //“内容”引号内为自定义函数
	system("ipconfig");
	system("ping www.bilibili.com");
	system("pause");//防闪退

	getchar();
	return 0;

}