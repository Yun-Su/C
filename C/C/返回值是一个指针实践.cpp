#include<stdio.h>
#include<Windows.h>
#include<time.h>
int * sx(int a[])
{
	int *p = a;
	for (int i = 1; i<=9; i++)
	{
		if (*p > *(p+i))
		{
			printf("%d ��һ%x,%x  ",i,p, p + i);
			*p =*(p+i);//?????
			//p = p + i;
			printf("�ڶ�%x,%x\n", p, p + i);
		}
	}
	return p;
}
int main()
{
	time_t t;
	srand((unsigned int)time(&t));
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand()%100;
		printf("%3d  %x\n", a[i],&a[i]);
	}
	printf("��СֵΪ%d", *(sx(a)));
	system("pause");
}