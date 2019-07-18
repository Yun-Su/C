#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct aaa
{
	int a;
	char b;
	char c[20];
};
int main()
{
	struct aaa a1;
	a1.a = 100;
	struct aaa a2;
	a2.b = 'a';
	struct aaa a3;
	sprintf_s(a3.c,"asdf");
	printf("%d,\n %c,\n %s\n",a1.a,a2.b,a3.c);
	getchar();
	return 0;
}