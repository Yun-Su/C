#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[1024];
	for (int i = 0; i < 1024; i++)
	{
		a[i] = i;
	}
	int num = 233;
	int shang = 0;
	int xia = 1023;
	int zhong;
	while (shang < xia)
	{
		zhong = (shang + xia) / 2;
		printf("shang=%d,xia=%d,zhong=%d\n",shang,zhong,xia);
		if (num==a[zhong])
		{
			   printf("ур╣╫ак\n");
			   break;
		}
		else if(num>a[zhong])
		{
			shang = zhong + 1;
		}
		else
		{
			xia = zhong - 1;
		}
	}
	system("pause");
}