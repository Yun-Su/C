#include<stdio.h>
#include<Windows.h>
void change(int a[9])
{
	for (int i = 0; i <5; i++)
	{
		int temp;
		temp = a[i]; 
		a[i] = a[8-i];
		a[8-i] = temp;
	}
	for (int i = 0; i <9; i++)
	{
		printf("%d\n", a[i]);
	}
}
void main()
{
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	change(a);
	system("pause");
}