#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
struct aaa
{
	char a[20];
	int b;
	char c;
};
int main()
{
	struct aaa a1[1] = { {"asdf",3,'c' } };
	//�ṹ������Ĳ���a1[i]����һ�������У���i���ṹ��
	//ÿ������Ԫ�ض���һ���ṹ��
	char a[50];
	scanf_s("%s", a,50);
	printf("��Ҫ�ҵ���%s\n",a);
	int num = sizeof(a1) / sizeof(struct aaa);
	//ѭ���Ĵ���=�����С/�ṹ�������С
	//???????????
	for (int i = 0; i < num; i++)
	{
		if (strcmp(a, a1[i].a) == 0)
		{
			printf("�ҵ�\n");
		}
		else
		{
			printf("��û���ҵ�\n");
		}
	}
	system("pause");
}