#include<stdio.h>
#include<Windows.h>
#include<stdarg.h>//�ɱ������Ӧ��ͷ�ļ�
int add(int num,...)
// ...����ɱ����
{
	int last = 0;
	va_list p;//�ȼ��� char *p ��typedef��ʽ
	va_start(p, num);
	//�����￪ʼ��ȡ��������ȡnum������
	//���ѵ�ַ����p
	for (int i = 0; i <num;i++)
	{
		int temp = va_arg(p,int);
		//��ȡָ���Ӧ�����ݣ���int�͸�ʽ
		printf("%d\n",temp);
		last+=temp;
	}
	va_end(p);//������ȡ
	return last;
}
/*����Ҫ��
f(int x,...)
va_list -----char *p
va_start(p,x)   ---��ȡx����ַ����p
va_arg(p,int)  -----��ȡָ���Ӧ����, ָ��int��ʽ
va_end(p)       ----ֹͣ��ȡ
*/
int main()
{
	int x=4;
	printf("�����%d\n", add(x, 1, 2, 3, 4));
}
