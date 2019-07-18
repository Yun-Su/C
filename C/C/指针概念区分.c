#include<stdio.h>
int main()
{
	int *p;//指向整数的指针
	int **p; //指向整型数指针的指针
	int *p[10]; //每一个元素都是指向整数的指针
	int(*p)[10]; //一个指向有10个元素的数组的指针
	int add(int x);
	int(*p)(int x); //指向函数的指针
	int(*p[10])(int x);//一个指向有10个函数的指针
	int(**p)(int x);//一个指向函数指针的指针
}