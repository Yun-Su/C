#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void main()
{
	char ch = 'A';
	int num = 100; 
	double db = 10.9;
	void *p;//空类型的指针可以指向任何类型的数据
	        //并记录他们的首地址，
	        //但没有记录他们的数据的大小，前进几个字节之类的。
	        //void类型是一种不完整的类型

	p = &ch;
	p = &num;
	p = &db;
	printf("%d", *p);//此处需要强制转换指针类型
	system("pause");
}