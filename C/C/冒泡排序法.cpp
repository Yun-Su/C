#include<stdio.h>
#include<Windows.h>
#include<time.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<4-i;j++)//4-i����Ϊ�Ѿ��Ƚϵ�����Ԫ���Ѿ��ŵ����ȥ��
		{
			if (a[j]<a[j+1])
			{
				int x; 
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	system("pause");
}