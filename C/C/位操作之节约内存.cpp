#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	int day;
	int month;
	int year;
};//�ṹ��ռ��12���ֽڴ�С


struct bbb
{
	unsigned int day : 5;//��5��λ����ʾday��ֵ0��31
	unsigned int month : 4;
	unsigned int year : 14;
};
int main()
{
	struct aaa a1;
	a1.day = 30;
	a1.month = 7;
	a1.year = 2017;
	printf("%d,%d,%d�ṹ���СΪ%d\n", a1.day, a1.month, a1.year,sizeof(struct aaa));
	struct bbb b1;
	b1.day = 25;
	b1.month = 11;
	a1.year = 1995;
	printf("%d,%d,%d,�ṹ��Ĵ�СΪ%d\n", b1.day, b1.month, b1.year,sizeof(struct bbb));
	getchar();
}