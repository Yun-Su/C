#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	switch (a)//switchֻ�ܴ���int��char����������
	{
	case 2:
		printf("2333\n");
		break;//���������break֮ǰ��һֱ������ȥ
	default:
		putchar(a);
	}
	system("pause");
}