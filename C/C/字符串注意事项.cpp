#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char a[30];
	while(1)
	{
	scanf_s("%s", &a,30);
	//坑爹，只能输入29个字符，最后一个是‘\0’
	Sleep(2000);
	printf("%s\n", a);
	}
	getchar();
	getchar();
}