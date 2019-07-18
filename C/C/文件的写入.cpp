#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	FILE *pf=fopen("D:\\1.txt","w");
	if (pf == NULL)
	{
		printf("文件打开失败\n");
	}
	else
	{
		printf("文件打开成功\n");
		fputs("苟利国家生死以\n", pf);
		//将字符写入写入缓存
		//fflash(pf);//强制将缓存写入到文件
		Sleep(2000);
		fclose(pf);
		//对缓存中的数据写入文件，保存并关闭

	}
	
}