#include<iostream>
using namespace std;
int a;
float b;
char c;
double d;
int *p;
//����Ϊȫ�ֱ���
int main()
{
	cout << a<< endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << p << endl << endl << endl;//ָ���ڴ���'00000000'�ĵ�ַ��ֵ,�ᱨ��
	//ʹ��ȫ�ֱ���ʱ���δ��ʼ��,cpp���Զ���ʼ��,����
	a = 10;
	b = 1.2;
	c = 'a';
	d = 2.4;
	p = &a;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << *p << endl;
	//��һ��������,�ֲ�������ֵ�Ḳ��ȫ�ֱ�����ֵ
	getchar();
	return 0;
}