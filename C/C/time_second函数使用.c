#include<stdio.h>
#include<time.h>
int main()
{
	time_t seconds;
	seconds = time(NULL);
	printf("�Դ�1970_01_01�Ѿ���ȥ��%d��\n", seconds);
	getchar();
	return 0;
}