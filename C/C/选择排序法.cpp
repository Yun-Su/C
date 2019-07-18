#include<stdio.h>
#include<Windows.h>
#include<time.h>
int main()
{
	int a[10];
	time_t t;
	srand((unsigned int)time(&t));
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		printf("%4d", a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (a[i]>a[j])
			{
				int x;
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("\n%d", a[i]);
	}
	system("pause");
}