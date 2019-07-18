#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	FILE *pf = fopen("D:\\abc.txt","w");
	//打开abc.txt文件
	if (pf == NULL)
	{
		printf("文件打开失败1\n");
		system("pause");
	}
	else
	{
		printf("文件打开成功1\n");
		system("pause");
		fputs("你大爷的", pf);
		if (ferror(pf)==0)
		//ferror函数在发生错误时返回值为非0
		{
			printf("文件打开正常2\n");
			system("pause");
		}
		else
		{
			printf("文件打开错误2\n");
			system("pause");

		}
	}
}