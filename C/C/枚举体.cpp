#include<stdio.h>
#include<stdlib.h>
enum aaa
//ö����,���������޶����÷�Χ
{
	ab,cd,ef,gh=12,ij
};
int main()
{
	enum aaa a1 = ab;
	//enum aaa a2=g;�ᱨ����Ϊ����ö���巶Χ��
	printf("%d\n",a1);
	//ö�������û�г�ʼ��Ĭ�ϴ�0��ʼ����ÿ�μ�1
	enum aaa a2 = gh;
	printf("%d\n", a2);
	//�ı���ö�����Աgh��ֵ
	//�����ֵҲ��ı�

	getchar();
}