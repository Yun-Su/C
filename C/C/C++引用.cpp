#include<iostream>
using namespace std;
int main()
{
	// 声明简单的变量
	int    i;
	double d;

	// 声明引用变量
	int&  r = i;
	double& s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;
	/*
	在这些声明中，& 读作引用。因此，第一个声明可以读作 "r 是一个初始化为 i 的整型引用"，
	第二个声明可以读作 "s 是一个初始化为 d 的 double 型引用"。
	实例使用了 int 和 double 引用：
	*/
	getchar();
	return 0;
}