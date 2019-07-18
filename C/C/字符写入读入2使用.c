#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	char a[30] = { 0 };
	scanf("%s", a);
	FILE *pp = fopen("D:\\hello.txt", "w");
	fprintf(pp, "%s", a);
	fclose(pp);//记得将已打开的文件指针关闭
	//否则后果很严重

	FILE *pf = fopen("D:\\hello.txt", "r");
	char b[30] = { 0 };
	fscanf(pf, "%s", b);
	system(b);
	Sleep(2000);
	getchar();
	return 0;
	/*
	char a[50] = { 0 };
	scanf("%s",a);
	FILE*fp= fopen("D:\\test1.txt", "w");//写入
	fprintf(fp, "%s",a);
	fclose(fp);

	FILE *pf = fopen("D:\\test1.txt", "r");
	char M[20] = { 0 };
	fscanf(fp,"%s",M);
	printf("你输入的命令是%s", M);
	system(M);
	getchar();
	*/
}