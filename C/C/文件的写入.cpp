#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	FILE *pf=fopen("D:\\1.txt","w");
	if (pf == NULL)
	{
		printf("�ļ���ʧ��\n");
	}
	else
	{
		printf("�ļ��򿪳ɹ�\n");
		fputs("��������������\n", pf);
		//���ַ�д��д�뻺��
		//fflash(pf);//ǿ�ƽ�����д�뵽�ļ�
		Sleep(2000);
		fclose(pf);
		//�Ի����е�����д���ļ������沢�ر�

	}
	
}