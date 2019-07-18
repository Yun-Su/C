#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void mystrset(char *p, char x)
{
	while(*p!='\0')
	{
		*p = x;
		p++;
	}
}
int main()
{
	char a[30] = "abcde";
	char b;
	scanf_s("%c",&b,1);
	mystrset(a, b);
	printf("×Ö·û´®µÄÖµÎª%s", a);
	system("pause");
}