#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	int a;
	char b;
	char c[30];
};
int main()
{
	struct aaa *pa;
	struct aaa a1;
	/*�����ṹ��*/
	pa = &a1;
	pa->a = 100;
	pa->b = 'c';
	sprintf_s(pa->c, "asdfghjkl", 30);
	printf("%d\n%c\n%s\n", pa->a, pa->b, pa->c);
	printf("%d\n%c\n%s\n", (*pa).a, (*pa).b, (*pa).c);
	//����д����ȫ�ȼ�
	system("pause");
}
