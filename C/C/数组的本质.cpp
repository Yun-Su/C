#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		printf("%d\n", a[i]);
	}
	int *p = a;//
	printf("ָ���ֵΪ%d\n", *p);
	//����ı���Ϊһ�����е�ַ���±��ָ�롣
	printf("����Ĵ�СΪ%d,%d", sizeof(a), sizeof(*p));
	//*p�洢������a��һ��Ԫ�صĵ�ַ��
	//sizeof(a)��ʾ��������Ĵ�С
	system("pause");
}