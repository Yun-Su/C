#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>//ʹ��һ��ʱ��ĺ�����
int main()
{
	//while (1)
	//{
	//int a = rand();//�������,����ÿ���������������һ����
	//printf("%d\n", a);
	//Sleep(5000);
	//}
	while (1)
	{
	time_t ts;//ʹ��һ��ʱ�亯����
	srand((unsigned int)time(&ts));//�޶�ʹ��ʱ����Ϊ���������
	unsigned int a=rand();
	printf("%d\n", a);
	Sleep(1000);
	}
}