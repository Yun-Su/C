#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	int a;
	char b;
	char c[10];
};
int main()
{
	typedef struct aaa * x;
	x i ;
	i = (x)malloc(sizeof(struct aaa));

}