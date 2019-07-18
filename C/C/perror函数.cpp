#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
int main()
{
	char a[20] = "D:\\abc.txt";
	for (int i = 0; i < 20; i++)
	{
		printf("%c\n",a[i]);
	}
	FILE *pf = fopen(a,"w");
	if (pf == NULL)
	{
		printf("无法打开\n");
		perror("原因是");
		//打印出"原因是",并输出错误信息
		getchar();
	}
	return 0;
}