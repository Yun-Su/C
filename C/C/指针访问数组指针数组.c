#include<stdio.h>
int main()
{
	char *p[4] = { "asdf","1234","QERTY","134aerq" };
	//�½�һ��ָ������
	for (char **pp = p; pp < p + 4; pp++)
	{
		printf("%s\n", *pp);
		//%s�������ܶ�Ӧһ����ַ,������һ�������ֵ���Բ�����**pp�����д�ӡ���
	}
	getchar();
	return 0;

}
