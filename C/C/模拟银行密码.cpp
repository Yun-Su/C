#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[30] = "123456";
	for (int i = 0; i < 3; i++)
	{
		char b[30];
		gets_s(b);
		if (strcmp(a, b) == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误，你还有%d次机会\n",2-i);
			if (i == 2)
			{
				printf("错误次数过多，已被锁定");
			}
		}

	}
	getchar();
}