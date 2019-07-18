#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[30];
	char b[30];
	scanf_s("%s", a,30);
	scanf_s("%s", b,30);
	printf("%s\n%s", a, b);
	getchar();
	getchar();
}