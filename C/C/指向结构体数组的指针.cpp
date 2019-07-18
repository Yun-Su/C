#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct aaa
{
	int a;
	char b;
	char c[30];
}a1[3] = { {1,'a',"asdf"},{2,'b',"ghjk"},{3,'c',"zxcv"} };
int main()
{
	for (struct aaa *p = a1; p < a1+3; p++)
	{
		printf("%d,%c,%s\n", p->a, p->b, p->c);
		Sleep(2000);
	}
	system("pause");
}