#include<stdio.h>
#include<Windows.h>
#include<time.h>
void sz(int (*p)[4])
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%-5d", *(*(p + i) + j));
		}
		printf("\n");
	}

}
void main()
{
	int a[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] =i*10+j;
		}
		printf("\n");
	}
	//int (*p)[4] = a;//�½�һ��ָ���ĸ�Ԫ��Ϊһ���һά�����ָ��
	//a��һ����ָ�룬ָ���һ�е��ĸ�Ԫ��
	sz(a);
	system("pause");
}