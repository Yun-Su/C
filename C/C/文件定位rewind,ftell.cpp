#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pf = fopen("D:\\abc.txt", "r");
	if (pf == NULL)
	{
		printf("��ʧ��");

	}
	else
	{
		while(!feof(pf))
		{
			char ch = fgetc(pf);
			//fgetc�����ڶ�ȡ��ǰָ������λ���Ժ������ƶ�һλ
			putchar(ch);
		}//�������Ժ�,pfָ�뵽���ļ���ĩβ.�ٴδ�ӡ����ʾΪ��
		char a[100] = { 0 };
		while(fgets(a, 100, pf) != NULL)
		//fgets()����,ÿ�ζ�һ��,�������з�����'\n'�ͻ᷵��,
			//ÿ��ֻ��ȡn-1���ַ�,����n���ַ���ֵ'\0'
		//�´��ٶ�ȡ��ʱ���ӵ�ǰ��λ�õ��¸��ֽڿ�ʼ��ȡ
		{
			printf("%s",a);
		}
		int size = ftell(pf);
		//ftell()����,���ص�ǰָ��λ�������ָ���׵�ַ���ֽ���
		//�������������ļ���С,�����ļ������ֽ�����
		printf("����ļ���СΪ%d\n", size);
		rewind(pf);//���Ѿ������ļ�ĩβ��ָ���ƶ�����ͷ
		getchar();
	}
	fclose(pf);
}