#include <iostream>
using namespace std;
int main()
{
	cout << "Hello, world!"<<endl;
	// 输出 Hello World
	//<< 运算符用于向屏幕传多个值
	getchar();
	return 0;
	/*上面这段程序中，包含了头文件 <iostream>。
	using namespace std; 告诉编译器使用 std 命名空间。
	命名空间是 C++ 中一个相对新的概念。
	cout << "Hello World"; 会在屏幕上显示消息 "Hello World"。
	下一行 return 0; 终止 main()函数，并向调用进程返回值 0。
	endl意为这将在每一行后插入一个换行符。
	*/
}