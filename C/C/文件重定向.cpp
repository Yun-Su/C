#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char str[100] = { 0 };
	fscanf(stdin, "%s", str);
	//fprintf(stdout, "str=%s\n", str);
	system(str);
}