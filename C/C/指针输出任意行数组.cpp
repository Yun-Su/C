#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int (*p)[4] = a;//�½�һ��ָ��4��Ԫ�ص�ָ��
	int i, j;
	scanf_s("%d,%d", &i,&j);
	printf("%d,%d,%d,%d\n", i, j, p[i][j],*(*(p+i)+j));
	system("pause");
}