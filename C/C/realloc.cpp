#include<stdio.h>
#include<Windows.h>

//realloc���������ڴ�ռ�����չһ�����ڴ�������������
//����չ���ڴ治�㣬�ͻ���������һ���ڴ�ռ䣬��ԭ�������ݸ��ƹ�ȥ
//����ԭ�����ڴ�ռ�����ͷš�
int main()
{
	int a;
	scanf_s("%d", &a);
	int *p = (int *)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++)
	{
		*(p + i) = i;
		printf("%d\n", *(p + i));
	}
	int b;
	scanf_s("%d", &b);
	int *px = (int *)realloc(p,sizeof(int)*(a+b));
	//realloc(�ڴ�ռ����ʼλ�ã���С)
	//���¸�������������ݷ����ڴ�
	//
	//???????????????????
	for (int i = 0; i < (a + b); i++)
	{
		p[i] = i;
		printf("%d\n", p[i]);
	}
	system("pause");
}