#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[30] = "task";
	char b[30] = "list";
	strcat_s(a, b);//��b���ַ���������task�ĺ���
	//strncat_s(a, b, 4);//����ָ���������ַ���
	system(a);
	getchar();

}