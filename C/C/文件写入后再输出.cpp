#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char str[100] = { 0 };
	fscanf(stdin, "%s", str);//�Ӽ��̶���һ�ַ���,д�뵽str���ڵ��ڴ��ַ��.
	//fprintf(stdout, "%s", str);//��str�����ڴ��ַ�е��ַ����������Ļ��.
	system(str);
}