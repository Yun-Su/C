#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	goto a2;
a1:printf("hello.world\n");//ԭ��Ӧ�ô�Ӧ�����ַ��ģ�����goto�Ժ������һЩ������
	Sleep(2000);
a2:printf("hello.23333\n");
	goto a1;//��������ѭ����c���Ի��������ִ�д��룬goto a1��ֱ��������һ�������ִ��
	getchar();
	/*�����a2�������a1*/
}