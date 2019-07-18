#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	char *path = "D:\\test1.txt";
	char cmd[50] = { 0 };
	scanf("%s",cmd);
	FILE*fp;
	fp = fopen(path, "w");//写入
	if (fp == NULL)
	{
		printf("写入失败");
	}
	else
	{
		fprintf(fp, "%s",cmd);
		//将cmd命令写入到fp指向的文件指针中。
		fclose(fp);
	}
	FILE *pf = fopen(path, "r");
	//？？？？？？？？？？？？？？
	char M[20] = { 0 };
	if (fp == NULL)
	{
		printf("打开失败\'n");
		Sleep(2000);
		return 0;
	}
	else
	{
		fscanf(fp,"%s",M);
		//读取文件指针的地址，并写入到字符串M中，

		printf("你输入的命令是%s", M);
		system(M);
	}
}