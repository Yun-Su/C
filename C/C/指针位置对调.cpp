#include<stdio.h>
#include<Windows.h>
#include<time.h>
int main()
{
	time_t t;
	int a[10];
	srand((unsigned int)time(&t));
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		printf("%3d", a[i]);
	}
	int *p = a;
	for (int i = 0; i < 5; i++)
	{
		int temp = *(p + i);
		*(p + i) = *(p + 9 - i);
		*(p + 9 - i) = temp;
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	system("pause");
}t