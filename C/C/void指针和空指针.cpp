#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10;
	double b = 20.23;
	int *p1 = &a;
	double *p2 = &b;
	void *px;//
	px = p1;//void���͵�ָ�������������ר���κ����͵ĵ�ַ
	//px = p2;
	//printf("%d", *px);//��Ϊvoid����ָ���ָ���ַ����ȷ
	//�����޷�ȡ��void ����ָ���ֵ
	printf("%d", *((int *)px));//����Ҫǿ��ת��voidָ�뵽��Ӧ
	                           //��ָ������
	system("pause");
	
}