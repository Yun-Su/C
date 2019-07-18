#include<stdlib.h>
#include<stdio.h>
void cz(char *p, char ch)
{
	while ((*p != '\0') && (*p != NULL))
	{
		if (*p == ch)
		{
			printf("找到啦~");
			break;
		}
		else
		{
			printf("并没有找到呢");
			break;//?????????
		}
		p++;
	}
}
int main()
{
	char a[20] = "hello.world";
	char b;
	scanf_s("%c", &b);
	cz(a, b);
	getchar();
	getchar();
}