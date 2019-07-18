#include <iostream>
using namespace std;
/*
 这个程序演示了有符号整数和无符号整数之间的差别
 C++ 允许使用速记符号来声明无符号短整数或无符号长整数。
 您可以不写 int，只写单词 unsigned、short 或 unsigned、long，int 是隐含的。
 例如，下面的两个语句都声明了无符号整型变量。
*/
int main()
{
	short int i;           // 有符号短整数
	short unsigned int j;  // 无符号短整数
	i = 50000;
	j = 50000;
	cout << i << " " << j<<endl;
	//i打印为-15536 j打印出50000;
	getchar();
	return 0;
}