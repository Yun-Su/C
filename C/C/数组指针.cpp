#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%x\n\n", a);//a������������Ϊ�׵�ַ
	for (int i = 0; i < 10; i++)
	{
		printf("%x\n", a + i);//ÿ�μ�һ��sizeof(��������)��С����
	}
	system("pause");
}