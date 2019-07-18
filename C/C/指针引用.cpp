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
	cout << "交换前a的值" << a << endl;
	cout << "交换前b的值" << b << endl;
	swap(a, b);
	cout << "交换后a的值" << a << endl;
	cout << "交换后b的值" << b << endl;
	getchar();
	return 0;
}