#include<stdio.h>
#include<Windows.h>
#include<stdarg.h>
double add(int num,...)
// ...����ɱ����
{
	double last = 0.0;
	va_list argp;
	//����һ��char���͵�ָ�벢�洢��ַ
	va_start(argp, num);
	//�����￪ʼ��ȡ��������ȡnum������
	//���ѵ�ַ����argp
	for (int i = 0; i <num;i++)
	{
		double temp = va_arg(argp,double);
		//��ȡ������������ȡ
		printf("%f\n",temp);
		last+=temp;
	}
	va_end(argp);
	//������ȡ
	return last;
}
int main()
{
	int x=10;
	double jieguo=0;
	jieguo=add(x,1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9,9.10,10.11);
	printf("%lf\n",jieguo);
	getchar();
}
