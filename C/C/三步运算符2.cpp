#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x = (0 ? 4 : 8);//����0���⣬������������������ֶ�������ֵ���������㣨�������棺�٣�
	printf("%d\n",x);
	int a = 5, b = 6, c = 7, d = 8;
	int y = a > b ? a : (c > d ? c : d);//�ж�˳��Ϊ��5>6?5:(7>8?7:8) ���Է���ֵΪ8    
	printf("%d\n", y);
	printf("%d\n", 2>1? 6 : 7);
	system("pause");
	
}