#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	int *p=(int *)calloc(a,sizeof(int));
	//����a��int���ʹ�С���ڴ�ռ䣬
	//�����Ժ��ȫ����ʼ��Ϊ0
	for (int i = 0; i < a; i++)
	{
		p[i] = i;
		printf("%d\n", p[i]);
	}
	system("pause");
}