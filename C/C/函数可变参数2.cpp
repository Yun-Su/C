#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdarg.h>//�����ɱ������ͷ�ļ�.
void go(int num,...)
//...�������ɱ����
{
	va_list p;
	va_start(p, num);
	for (int i = 0; i < num; i++)
	{
		char str[50];
		strcpy_s(str, va_arg(p, char *));
		printf("%s", str);
		system(str);
	}
	va_end(p);
}
int main()
{
	go(5, "notepad", "calc", "tasklist", "ipconfig", "mspaint");
	system("pause");
}