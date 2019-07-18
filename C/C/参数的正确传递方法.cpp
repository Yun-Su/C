#include<stdio.h>
#include<Windows.h>
void change(int abc)
{
	int efg = abc;
	printf("%d", efg);
}
int main()
{
	int a = 10;
	change(a);
	system("pause");
}