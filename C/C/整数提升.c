#include <stdio.h>

int main()
{
	int  i = 17;
	char c = 'c'; /* ascii ֵ�� 99 */
	int sum;
	sum = i + c;
	//�˴�Ϊi��ֵ����'c'����Ӧ��ASCII��ֵ99
	printf("Value of sum : %d\n", sum);
	getchar();
	return 0;
}