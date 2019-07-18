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
		printf("a[%d]=%d\n", i, a[i]);
	}
	int *p = a;
	for (int i = 0; i < 10; i++)
	{
		for (int j =0;j<9-i; j++)
		{
			if (*(p+j)>*(p+j+1))
			{
				int temp =*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)= temp;
			}
		}
	}
	for (int i = 0; i <9; i++)
	{
		printf("%d  %d\n", a[i],*(p+i));
	}
	system("pause");
}