#include<stdio.h>
#include<Windows.h>
void change(int *p)
{
	*p = 99;
}
int main()
{
	int a = 10;
	change(&a);
	printf("%d\n",a);
	system("pause");
}