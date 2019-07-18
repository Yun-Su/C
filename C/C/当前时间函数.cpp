#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main()
{
	time_t curtime;
	time(&curtime);
	//该函数返回一个 C 字符串，该字符串包含了可读格式的日期和时间信息
	printf("但前时间是%s \n",ctime(&curtime));
	getchar();
	return(0);
}