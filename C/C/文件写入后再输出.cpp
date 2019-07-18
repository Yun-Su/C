#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char str[100] = { 0 };
	fscanf(stdin, "%s", str);//从键盘读入一字符串,写入到str所在的内存地址中.
	//fprintf(stdout, "%s", str);//把str所在内存地址中的字符串输出到屏幕上.
	system(str);
}