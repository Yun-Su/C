#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[30] = "123456";
	for (int i = 0; i < 3; i++)
	{
		char b[30];
		gets_s(b);
		if (strcmp(a, b) == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("��������㻹��%d�λ���\n",2-i);
			if (i == 2)
			{
				printf("����������࣬�ѱ�����");
			}
		}

	}
	getchar();
}