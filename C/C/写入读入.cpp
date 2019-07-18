#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	char a[50] = { 0 };
	scanf("%s",a);
	FILE*fp= fopen("D:\\test1.txt", "w");//写入
	fprintf(fp, "%s",a);
	//将a所在内存中的字符写入到fp指向的文件指针中。
	fclose(fp);

	FILE *pf = fopen("D:\\test1.txt", "r");
	char M[20] = { 0 };
	fscanf(fp,"%s",M);
	//读取文件指针的地址，并写入到字符串M中，
	printf("你输入的命令是%s", M);
	system(M);
	getchar();
}