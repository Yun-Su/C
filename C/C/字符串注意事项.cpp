#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char a[30];
	while(1)
	{
	scanf_s("%s", &a,30);
	//�ӵ���ֻ������29���ַ������һ���ǡ�\0��
	Sleep(2000);
	printf("%s\n", a);
	}
	getchar();
	getchar();
}