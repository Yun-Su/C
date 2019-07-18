#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned char a = 11;
	unsigned int b = 23;
	float c = 12.3;
	double d = 10.2;
	printf("%d,大小为%d,%d,%d\n", a&b, sizeof(a&b), a | b,a^b);//字节大小不一样
	//无符号类型的数据在进行位运算的时候会自动进行字节大小和数据类型的转换。

	//printf("%d\n", c | d);
	//位运算只适用于int型和char型的字符类型其他类型会报错。
	getchar();
}