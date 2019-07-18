#include<stdio.h>
#include<Windows.h>
int main()
{
	int num;

	num = 10;

	printf("%x\n", &num);

	printf("%d\n", num);

	printf("%d\n", *(&num));
	system("pause");
}