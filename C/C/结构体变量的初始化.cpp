#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	char a[10];
	char b;
	int c[3];//ʵ�����Ժ�Ҫ������������
	int e;
}a1 = { "123a1",'4',56,78,910,25};
//��ʼ���ṹ���Ա
int main()
{
	//struct aaa a1, a2, a3;
	//Ҳ����������ʼ���ṹ�����
	struct aaa a2 = { "abc",'d',45,47,6,98};
	//��ʼ���ṹ���Ա
	//������������������������������
	printf("%d\n%s\n%c\n",
		a1.e,
		a1.a,
		a1.b);
	getchar();
}