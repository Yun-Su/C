#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pf = fopen("D:\\abc.txt", "w");
	if (pf == NULL)
	{
		printf("�ļ���ʧ��01\n");
		perror("ԭ����");
	}
	else
	{
		fputs("��������������", pf);
		rewind(pf);//��ָ�������ƶ�����ͷ
		char ch = fgetc(pf);//���ļ��ж�ȡһ���ַ�
		if (ch == EOF)
		{
			if (feof(pf))
			{
				printf("�������ļ�ĩβ\n");
				getchar();
				clearerr(pf);
				//�����ļ�����״̬
			}
			if (ferror(pf))
			{
				printf("�ļ���ȡ����\n");
				getchar();
				clearerr(pf);
				//�����ļ�����״̬
			}
		}
		
	}
	fclose(pf);
}