#include <stdio.h>

int main()
{
	int  i = 17;
	char c = 'c'; /* ascii 值是 99 */
	int sum;
	sum = i + c;
	//此处为i的值加上'c'所对应的ASCII码值99
	printf("Value of sum : %d\n", sum);
	getchar();
	return 0;
}