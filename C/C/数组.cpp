#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, a;
	int c[3] = {};//����Ϊ��ʱ��Ĭ�ϳ�ʼ��Ϊ0��
	for(i=0;i<3;i++)
	{
		scanf_s("%d", &c[i]);
	}
	for (i=0; i < 3; i++)
	{
		printf("%d\n", c[i]);
	}
	system("pause");
}