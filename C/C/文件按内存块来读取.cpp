#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[100];
	FILE *pf;
	pf = fopen("D:\\a.txt", "rb");//������д���ģʽ�����ļ�
	if (pf == NULL)
	{
		printf("�ļ���ʧ��\n");
	}
	else
	{
		int res = 0;
		res = fread(num, sizeof(int), 100, pf);
		//��ȡ�ļ�д���ڴ�
		//res ���ض�ȡ�ɹ��ĸ���
		//num Ҫд���ڴ���׵�ַ
		//sizeof Ԫ�صĴ�С
		//100 Ԫ�ص�����
		//pf �ļ���ָ��
		if (res == 100)
		{
			printf("��ȡ�ɹ�\n");
		}
		for (int i = 0; i < 100; i++)
		{
			printf("num[%d]=%d\n", i, num[i]);
		}
		fclose(pf);
		system("pause");
	}
}