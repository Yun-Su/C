#include<stdio.h>
int main()
{
	unsigned char ch1 = 168, ch2 = 133;
//168 10101000
//133 10000101
//    10101101
	printf("��%d\n", ch1&ch2);//��0��&��Ϊ0
	printf("��%d\n", ch1 | ch2);//��1��|��Ϊ1
	printf("���%d\n", ch1^ch2);//��ͬΪ0����ͬΪ1
	unsigned char ch3 = ~ch1;
	unsigned char ch4 = ~ch2;
	printf("��%d,%d\n", ch3,ch4);//���ȡ����
	getchar();
	return 0;
}