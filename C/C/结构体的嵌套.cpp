#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	char c;
	int d;

};
struct bbb
{
	int a;
	char b;
	struct aaa a1;
};
int main()
{
	struct bbb b1;
	b1.a = 10;
	b1.b = 'A';
	b1.a1.c = 'C';
	b1.a1.d = 20;
	printf("b1.a��ֵΪ%d\nb1.b��ֵΪ%c\nb1.a1.c��ֵΪ%c\nb1.a1.d��ֵΪ%d\n",
		b1.a, b1.b, b1.a1.c, b1.a1.d);
	getchar();
}