#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10, b = 12;
	int *pa = &a, *pb = &b, **px = NULL;//ָ�벻ֻ��һ����ַ
	//����������ǰ�������ֽڣ���ʲô��ʽ����һ���ڴ�ռ���Ķ���������
	//pa = pb;
	//*pa = *pb;
	px = &pb;
	
	printf("%d\n", **px);
	system("pause");
}