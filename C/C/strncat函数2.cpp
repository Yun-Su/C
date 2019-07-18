#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mystrncat(char *bc,char *c,int length)
{
	if (bc == NULL || c == NULL)
	{
		return 0;
	}
	while (*bc != '\0')
	{
		bc++;
	} 
	for (int i = 0; i < length; i++)
	{
		*bc = c[i];
		bc++;
	}
}
int main()
{
	char a[30] = "hello,world";
	char b[30] = "123456";
	mystrncat(a, b, 5);
	printf("%s", a);
	getchar();
}