#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned char a = 1;
	printf("%d\n", a << 1);//��0000 0001 �ƶ�1λ0000 0010
						   //�����ĸ�������
	printf("%d\n", a << 4);//0000 0010-->0001 0000;
	printf("%d\n", a = (a << 7));  // 0000 0001
	printf("%d\n", a>>4);//0010 0000-->0000 1000;
	                    //(128)(64)(32)(16)  (8)(4)(2)(1)

	getchar();
}