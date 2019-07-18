#include<iostream>
using namespace std;
typedef int feet;
feet main()
//typedef 给int起了一个别名feet
{
	feet a = 2, b = 1;
	//等同于int a=2;
	feet c = a + b;
	cout << c << endl;
	//输出c的值
	getchar();
	return 0;
}