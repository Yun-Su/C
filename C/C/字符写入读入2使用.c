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
	fclose(pp);//�ǵý��Ѵ򿪵��ļ�ָ��ر�
	//������������

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
	FILE*fp= fopen("D:\\test1.txt", "w");//д��
	fprintf(fp, "%s",a);
	fclose(fp);

	FILE *pf = fopen("D:\\test1.txt", "r");
	char M[20] = { 0 };
	fscanf(fp,"%s",M);
	printf("�������������%s", M);
	system(M);
	getchar();
	*/
}