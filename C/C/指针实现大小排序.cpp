#include<stdio.h>
#include<Windows.h>
int main()
{
	int a, b;
	scanf_s("%d,%d", &a, &b);
	int *p1 = &a;//ָ������ʼ������������Ұָ������
	int *p2 = &b;
	if (a > b)
	{
		int *px = NULL;
		px = p1;//ָ�벻�ܽ�������ַ���Խ���
		p1 = p2;
		p2 = px;
	}
	printf("%d,%d",*p1,*p2);
	system("pause");
}