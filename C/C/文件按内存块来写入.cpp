#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[100];
	for (int i = 0; i < 100; i++)
	{
		num[i] = i;
	}
	FILE *pf;
	pf = fopen("D:\\a.txt", "wb");//������д���ģʽ'b',���ļ�a.txt
	if (pf == NULL)
	{
		printf("�ļ���ʧ��\n");
	}
	else
	{
		int res = 0;
		res=fwrite(num,sizeof(int),100,pf);
		//���ڴ�д���ļ�
		//num ȷ��Ҫд����ڴ���׵�ַ
		//sizeof() ȷ��Ҫд���ڴ���׵�ַ�Ĵ�С
		//100 д��Ԫ�صĸ���
		//pf д�뵽ָ�����ļ�ָ����
		if (res == 100)
		{
			printf("д��ɹ�\n");
		}
		else
		{
			printf("д��ʧ��\n");
		}
		fclose(pf);
		printf("�ļ��򿪳ɹ�\n");
	}
	system("pause");
}