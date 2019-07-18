#include<iostream>
using namespace std;
int a;
float b;
char c;
double d;
int *p;
//以上为全局变量
int main()
{
	cout << a<< endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << p << endl << endl << endl;//指向内存中'00000000'的地址的值,会报错
	//使用全局变量时如果未初始化,cpp会自动初始化,如上
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
	//在一个函数中,局部变量的值会覆盖全局变量的值
	getchar();
	return 0;
}