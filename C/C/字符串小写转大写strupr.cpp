#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	char a[30] = "tasklist";
	_strupr_s(a);//Сдת��д
	printf("%s\n", a);
	Sleep(2000);
	_strlwr_s(a);//��дתСд
	printf("%s\n", a);
	Sleep(2000);
	system(a);
	getchar();
}