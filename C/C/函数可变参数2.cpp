#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdarg.h>
//�����ɱ����
void go(int num,...)
//...�������ɱ����
{
	va_list argp;
	va_start(argp, num);
	for (int i = 0; i < num; i++)
	{
		char str[50];
		strcpy_s(str, va_arg(argp, char *));
		printf("%s", str);
		system(str);
	}
	va_end(argp);
}
int main()
{
	go(5, "notepad", "calc", "tasklist", "ipconfig", "mspaint");
	system("pause");
}