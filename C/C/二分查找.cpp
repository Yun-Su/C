#include<stdio.h>
#include<Windows.h>
int main()
{
	int num = 0;
	int a[1024];
	for (int i = 0; i < 1024; i++)
	{
		a[i] = i;
	}
	int s=0, z, x=1024;
	printf("输入一个你要找的数\n");
	scanf_s("%d", &num);
	while (s < x)
	{
		z = (s + x) / 2;
		printf("z=%d\n", z);
		if (num==z)
		{
			printf("你要找的数是%d，已找到\n", num);
			break;
		}
		else if (num > z)
		{
			s = z + 1;
		}
		else
		{
			x = z - 1;
		}
	}
	system("pause");
}