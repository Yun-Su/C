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
	fp = fopen(path, "w");//д��
	if (fp == NULL)
	{
		printf("д��ʧ��");
	}
	else
	{
		fprintf(fp, "%s",cmd);
		//��cmd����д�뵽fpָ����ļ�ָ���С�
		fclose(fp);
	}
	FILE *pf = fopen(path, "r");
	//����������������������������
	char M[20] = { 0 };
	if (fp == NULL)
	{
		printf("��ʧ��\'n");
		Sleep(2000);
		return 0;
	}
	else
	{
		fscanf(fp,"%s",M);
		//��ȡ�ļ�ָ��ĵ�ַ����д�뵽�ַ���M�У�

		printf("�������������%s", M);
		system(M);
	}
}