#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
char str1[20]="notepad";
char str2[20]="tasklist";
void change(char *str)
{
	str=str1;
}
void changep(char **pp)
{
	*pp=str1;
}
void main()
{
	char *p= str2;
	changep(&p);
	system("tasklist&&pause");
}
