#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	FILE*fp;
	fp= fopen("D:\\test.txt","w");//创建一个文件并写入
	if (fp == NULL)
	{
		printf("打开失败");
	}
	else
	{
		printf("成功");
		fputs("hello.world",fp);//将hello.world写入文本中
		Sleep(3000);
		fclose(fp);//关闭已打开文件
 	}
	return 0;
}