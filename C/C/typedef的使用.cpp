#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct aaa 
{
	int e;
	char f;
};
int main()
{
	typedef int i;
	typedef double d;
	typedef int * z;
	//typedef给变量一个别称
	i a = 10;
	d b = 123.456;
	z p = &a;

	typedef struct aaa jgt;
	jgt a1;
	a1.e = 789;
	a1.f = 'w';

	printf("%d,%lf,%d,%d,%c", a, b, *p,a1.e,a1.f);
	getchar();
}