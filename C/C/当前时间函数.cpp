#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main()
{
	time_t curtime;
	time(&curtime);
	//�ú�������һ�� C �ַ��������ַ��������˿ɶ���ʽ�����ں�ʱ����Ϣ
	printf("��ǰʱ����%s \n",ctime(&curtime));
	getchar();
	return(0);
}