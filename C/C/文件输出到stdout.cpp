#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pf = stdout;
	fputs("helo,wrold\n",pf);
	//���ַ��������ʾ��
	system("pause");
}