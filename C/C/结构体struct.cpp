#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct nameinfo
//�ṹ�壬�Ѳ�ͬ������ϳ�һ������
//nameinfo  �ṹ�����͵����֣�ʡ�Ժ��Ϊ�����ṹ��
//struct  �ṹ��ؼ��֣�
{
	char name[50];
	char phone[50];
	int num;
};
int main()
{
	struct nameinfo  abcd;
	//����һ���ṹ�����abcd
	abcd.num = 100;
	//�Խṹ����и�ֵ
	printf("�ṹ��ı��Ϊ%d\n", abcd.num);
	//abcd.phone="asdfgh"������
	//�ַ�����һ���������ͣ�������'='ֱ�Ӹ�ֵ
	//���·�ʽ���Զ��ַ����ṹ�帳ֵ
	sprintf_s(abcd.name,"hello.world");
	strcpy_s(abcd.phone,"123456789");
	printf("�ṹ�����Ϊ%s\n�ṹ�����Ϊ%s\n", abcd.name, abcd.phone);
	system("pause");
}