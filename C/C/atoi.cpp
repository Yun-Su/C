#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[20] = "2333";
	int num = atoi(a);
	//atoi(a+1)????????
	//�������ַ���תΪ����
	//�����ַ�����ת��Ϊ0
	printf("%d", num);
	getchar();
}