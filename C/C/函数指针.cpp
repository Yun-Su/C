#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
//����ָ��
void msg(char * str)
{	
	MessageBoxA(0, "��������",str, 0);
} 
void add(int a,int b)
{	
	printf("%d\n", a + b);
}
int main()
{
	msg("���Ǳ���//ֱ�ӵ���");//ֱ�ӵ���msg����
	getchar();
	void(*px)(char * str)=msg;
	//�½�һ������ָ��,����ָ����г�ʼ����
	px("��ӵ��ú���");
	void (*p)(int,int) = add;
	p(1,2);
	system("pause");
}