#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	char a[50] = { 0 };
	scanf("%s",a);
	FILE*fp= fopen("D:\\test1.txt", "w");//д��
	fprintf(fp, "%s",a);
	//��a�����ڴ��е��ַ�д�뵽fpָ����ļ�ָ���С�
	fclose(fp);

	FILE *pf = fopen("D:\\test1.txt", "r");
	char M[20] = { 0 };
	fscanf(fp,"%s",M);
	//��ȡ�ļ�ָ��ĵ�ַ����д�뵽�ַ���M�У�
	printf("�������������%s", M);
	system(M);
	getchar();
}