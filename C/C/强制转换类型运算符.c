#include <stdio.h>
int main()
{
	int sum = 17, count = 5;
	double mean;
	mean = (double)sum / count;
	/*ǿ������ת������������ȼ����ڳ�����
	��� sum ��ֵ���ȱ�ת��Ϊ double �ͣ�
	Ȼ����� count���õ�һ������Ϊ double ��ֵ��
	����ת����������ʽ�ģ��ɱ������Զ�ִ�У�
	Ҳ��������ʽ�ģ�ͨ��ʹ��ǿ������ת���������ָ����
	�ڱ��ʱ������Ҫ����ת����ʱ������ǿ������ת���������
	��һ�����õı��ϰ�ߡ�*/
	printf("Value of mean : %f\n", mean);
	getchar();
	return 0;
}