#include<stdio.h>
int jia(int a, int b)
{
	return a + b;
}
int jian(int a, int b)
{
	return a - b;  
}
int cheng(int a, int b)
{
	return a * b;
}
int chu(int a, int b)
{
	return a / b;   
}

int main()
{
	int *px[10];//һ��ָ������
	int(*p)(int a, int b);//һ������ָ��
	//int(*pp[4])(int e, int f);
	//һ������ָ������,ÿ��Ԫ�ض���һ������ָ��
	int(*pp[4])(int e, int f) = { jia,jian,cheng,chu };
	//����ָ������ĳ�ʼ��
	//ͬһ���͵ĺ���,����������ͳһ��������ַ,Ȼ����е���
	int c = 100;
	int d = 20;
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n",(*pp[i])(c, d));
		//printf("%d\n", pp[i](c, d));
		//���ֵһ��?????
	}
	getchar();
	return 0;
}
