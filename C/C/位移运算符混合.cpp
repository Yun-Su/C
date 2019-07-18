#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned char a = 2, b = 3, c = 4;
	a <<= 2;//等价于a=a<<2
	b |= 3;//等价于b=b|3;
	//0000 0011
	//0000 0011
	//0000 0110
	c &= 3;
	//0000 0100
	//0000 0011
	

	//c~3  //c=c~3;
	printf("%d,%d,%d\n", a,b,c);
	getchar();
}