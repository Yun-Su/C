#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void main()
{
	char ch = 'A';
	int num = 100; 
	double db = 10.9;
	void *p;//�����͵�ָ�����ָ���κ����͵�����
	        //����¼���ǵ��׵�ַ��
	        //��û�м�¼���ǵ����ݵĴ�С��ǰ�������ֽ�֮��ġ�
	        //void������һ�ֲ�����������

	p = &ch;
	p = &num;
	p = &db;
	printf("%d", *p);//�˴���Ҫǿ��ת��ָ������
	system("pause");
}