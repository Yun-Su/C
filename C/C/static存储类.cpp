#include <iostream>
static int count = 10; 
// 全局变量声明static 存储类指示编译器在程序的生命周期内保持局部变量的存在，
//而不需要在每次它进入和离开作用域时进行创建和销毁。
//因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
void func(void)
{
	static int i = 5; // 局部静态变量
	i++;
	std::cout << "变量 i 为 " << i;
	std::cout << " , 变量 count 为 " << count << std::endl;
}
//函数定义
int main()
{
	while (count--)
	{
		func();
	}
	getchar();
	return 0;
}
