#include <stdio.h>
int main()
{
	int sum = 17, count = 5;
	double mean;
	mean = (double)sum / count;
	/*强制类型转换运算符的优先级大于除法，
	因此 sum 的值首先被转换为 double 型，
	然后除以 count，得到一个类型为 double 的值。
	类型转换可以是隐式的，由编译器自动执行，
	也可以是显式的，通过使用强制类型转换运算符来指定。
	在编程时，有需要类型转换的时候都用上强制类型转换运算符，
	是一种良好的编程习惯。*/
	printf("Value of mean : %f\n", mean);
	getchar();
	return 0;
}