#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[10];
	int *p=a;
	int **px = &p;
	for (int i = 0; i < 10; i++)
	{
		a[i] = i*3;
	}


	printf("%x\n\n", a+5);//aΪһ����ַ��a+5�����a�ĵ�ַ��ʼ
	                     //ǰ��5������Ԫ�أ�ȡ��������Ԫ��
	                     //������a��ֵ��5
	for (int i = 0; i < 10; i++)
	{
		printf("%x,%d,%d\n", &a[i], *(p + i), *(*px+i));
	}
	system("pause");
}