#include <stdio.h>
int count;
extern void write_extern();
//extern �洢�������ṩһ��ȫ�ֱ��������ã�
//ȫ�ֱ��������еĳ����ļ����ǿɼ��ġ�
//����ʹ�� 'extern' ʱ�������޷���ʼ���ı���
//��ѱ�����ָ��һ��֮ǰ������Ĵ洢λ�á�
int main()
{
	count = 5;
	write_extern();
	getchar();
	return 0;
}