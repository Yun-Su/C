#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p = "title china is big";
	//���ַ�����ֵ��ָ��
	//printf("%p", p);
	char *str = p;
	//�洢�ַ�����ָ�����
	while (*p)
	{
		putchar(*p);
		p++;//����������������������������������

	}
	system(str);
	system("pause");
}