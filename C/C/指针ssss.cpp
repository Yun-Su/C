#include<stdio.h>
#include<Windows.h>
int main()
{

	int i, *p, a[] = {1,2,3,4,5,6,7,8,9,0};
	p = a;
	for (i = 0; i <= 9; i++)
	{
		printf("%d\n",*p);
		p++; 
	}
	system("pause");
}