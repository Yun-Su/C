#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	FILE *pf = fopen("D:\\abc.txt","w");
	//��abc.txt�ļ�
	if (pf == NULL)
	{
		printf("�ļ���ʧ��1\n");
		system("pause");
	}
	else
	{
		printf("�ļ��򿪳ɹ�1\n");
		system("pause");
		fputs("���ү��", pf);
		if (ferror(pf)==0)
		//ferror�����ڷ�������ʱ����ֵΪ��0
		{
			printf("�ļ�������2\n");
			system("pause");
		}
		else
		{
			printf("�ļ��򿪴���2\n");
			system("pause");

		}
	}
}