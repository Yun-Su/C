#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[4][7] = { "hello","world","ni","hao" };
	char (*p)[4] = { "hel"};
	//这是一个数组指针,指向一个包含四个元素的一维数组的指针
	//(*p)指向一个一维数组
	char *pp[4] = { "hello","world","ni","hao" };
	//这是一个指针数组,每个元素都是一个指针
	//'[]'符号的优先级大于'()',也大于'*'
    //详情见http://www.slyar.com/blog/c-operator-priority.html
	printf("%d %d %d", sizeof(a), sizeof(*p), sizeof(*pp));
	//sizeof(a)为整个数组的大小
	//sizeof((*p))为数组内每一个元素的大小的总和
	//sizeof(*pp)为数组内每个元素(元素内存储了指针)的大小的总和
	getchar();
	return 0;

}