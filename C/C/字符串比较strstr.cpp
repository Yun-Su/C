#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[30] = "asdfghjklqwertyuiop123";
	char b[30] = "tyu";
	char *p = strstr(a, b);
	//�Ƚ������ַ����Ƿ����
	if (p == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("���ҵ�");
		char c[30];
		strcpy_s(c, p + 3);
		printf("%s", c);
	}
	getchar();
}