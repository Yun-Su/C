#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	FILE*fp;
	fp= fopen("D:\\test.txt","w");//����һ���ļ���д��
	if (fp == NULL)
	{
		printf("��ʧ��");
	}
	else
	{
		printf("�ɹ�");
		fputs("hello.world",fp);//��hello.worldд���ı���
		Sleep(3000);
		fclose(fp);//�ر��Ѵ��ļ�
 	}
	return 0;
}