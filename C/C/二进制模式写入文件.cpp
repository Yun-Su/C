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
	FILE *pf = fopen("D:\\1.txt","wb");//�Զ�����д��ģʽ"b"������ļ�
	if (pf!=NULL)
	{
		int res = 0;
		res = fwrite(num, sizeof(int), 100, pf);//���ڴ��е�����д���ļ�
		//д��ɹ��󷵻�д��ɹ�������
		//num:ָ��Ҫд����ڴ��ַ
		//sizeof(int) �趨Ҫд��ĵ���Ԫ�ش�С
		//100 �趨Ҫд���Ԫ�ظ���
		//pf Ҫд����ļ�(ָ��)

		if (res == 100)
		{
			printf("д��ɹ�\n");
			getchar();
		}
		fclose(pf);
	}
}