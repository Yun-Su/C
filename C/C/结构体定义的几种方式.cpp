#include<stdio.h>
#include<stdlib.h>
struct aaaa
//����һ���ṹ��aaaa
//aaaa��û�з����ڴ棬Ҫʵ�������ܷ���

{
	int a[10];
	int d;
	int aaaa;
	//�ṹ���Ա���������������ظ��Ҳ������
};

struct aaaa a1, a2, a3;
//��aaaa��Ϊ�ṹ������
//'a1''a2''a3'Ϊ�����ṹ�����
//��� int a1,a2,a3;

#define hh struct bbbb
//define ����Ϊ�滻
//����һ���ṹ��bbbb
//��'hh'�滻'struct bbbb'
hh
 {
	int a[10];
	int d;
};
hh b1,b2,b3;
//
struct cccc
{
	int a[10];
	int b;
}c1,c2,c3;
//ֱ���ں�����ӽṹ�����Ҳ����

int main()
{
	//'aaaa.num'��Ч��
	//aaaa�ǽṹ�����ͣ�û��ʵ�������޷�����
	c3.b;
	//c3Ϊʵ�����ṹ�����������ֱ�ӷ���
}