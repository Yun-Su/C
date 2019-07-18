#include<stdio.h>
#include<stdlib.h>
void cs(char *p, char c,int d)
{
	for (int i = 0; i < d; i++)
	{
		*(p + i) = c;
	}
	printf("%s",p);

}
int main()
{
	char a[30] = "asdfghjkl";
	char b[30] = "12345678901234567890";
	char c;
	int d;
	printf("输入一个字符\n");
	scanf_s("%c", &c, 5);
	printf("输入字符要写入的个数\n");
	scanf_s("%d", &d, 5);                                   
	cs(b,c,d);
	system("pause");
}