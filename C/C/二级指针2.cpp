#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10,b = 20;
	int *pa = &a,*pb = &b;
	int **px = NULL;//ָ������ʼ������������Ұָ������
	//ָ����  *����ָ���ʾ px����ָ���ַ. **����ȡ2�ε�ַ.
	scanf_s("%d,%d", &a, &b);
	if (a > b)
	{
		px=&pb;
	}
	else
	{
		px =&pa;
	}
 	printf("%d\n", **px);
	system("pause");
}