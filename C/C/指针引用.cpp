#include<iostream>
using namespace std;
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
	return;
}
int main()
{
	int a = 100;
	int b = 20;
	cout << "����ǰa��ֵ" << a << endl;
	cout << "����ǰb��ֵ" << b << endl;
	swap(a, b);
	cout << "������a��ֵ" << a << endl;
	cout << "������b��ֵ" << b << endl;
	getchar();
	return 0;
}