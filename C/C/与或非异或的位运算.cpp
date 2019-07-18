#include<stdio.h>
int main()
{
	unsigned char ch1 = 168, ch2 = 133;
//168 10101000
//133 10000101
//    10101101
	printf("与%d\n", ch1&ch2);//有0相&则为0
	printf("或%d\n", ch1 | ch2);//有1相|则为1
	printf("异或%d\n", ch1^ch2);//相同为0，不同为1
	unsigned char ch3 = ~ch1;
	unsigned char ch4 = ~ch2;
	printf("反%d,%d\n", ch3,ch4);//逐个取反。
	getchar();
	return 0;
}