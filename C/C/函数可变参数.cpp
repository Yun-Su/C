#include<stdio.h>
#include<Windows.h>
#include<stdarg.h>//�ɱ������Ӧ��ͷ�ļ�
int add(int num,...)
// ...����ɱ����
{
	int last = 0;
	va_list p;
	//����һ��char���͵�ָ��
	va_start(p, num);
	//�����￪ʼ��ȡ��������ȡnum������
	//���ѵ�ַ����p
	for (int i = 0; i <num;i++)
	{
		int temp = va_arg(p,int);
		//��ȡ������������ȡ
		printf("%d\n",temp);
		last+=temp;
	}
	va_end(p);//������ȡ
	return last;
}
int main()
{
	int x=4;
	printf("�����%d\n", add(x, 1, 2, 3, 4));
}
