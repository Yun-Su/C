#include<stdio.h>
#include<stdlib.h>
char * mystrchr(char * str, char ch)
{
	if (str == NULL)
	{
		return NULL;
	}
	else
	{
		while (*str != '\0')
		{
			if (*str==ch)
			{
				return str;
			}
			str++;
		}
		return NULL;
	}
}
int main()
{
	char str[20] = "i love iphone";
	char ch = 'c';
	char *p = mystrchr(str, ch);
	if (p==NULL)
	{
		printf("û���ҵ�\n");
	}
	else
	{
		printf("�ҵ���\n");
	}
	getchar();
}