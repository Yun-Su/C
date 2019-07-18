#include <iostream>
using namespace std;
double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };
double& setValues(int i)
/*当返回一个引用时，要注意被引用的对象不能超出作用域。
所以返回一个对局部变量的引用是不合法的，
但是，可以返回一个对静态变量的引用
引用的规则： 
（1）引用被创建的同时必须被初始化（指针则可以在任何时候被初始化）。 
（2）不能有NULL引用，引用必须与合法的存储单元关联（指针则可以是NULL）。 
（3）一旦引用被初始化，就不能改变引用的关系（指针则可以随时改变所指的对象）。 */
{
	return vals[i];   // 返回第 i 个元素的引用
}// 要调用上面定义函数的主函数
int main()
{
	cout << "改变前的值" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
	setValues(1) = 1.1; // 改变第 2 个元素
	setValues(3) = 2.2;  // 改变第 4 个元素
	cout << "改变后的值" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
	getchar();
	return 0;
}