#include <iostream>
static int count = 10; 
// ȫ�ֱ�������static �洢��ָʾ�������ڳ�������������ڱ��־ֲ������Ĵ��ڣ�
//������Ҫ��ÿ����������뿪������ʱ���д��������١�
//��ˣ�ʹ�� static ���ξֲ����������ں�������֮�䱣�־ֲ�������ֵ��
void func(void)
{
	static int i = 5; // �ֲ���̬����
	i++;
	std::cout << "���� i Ϊ " << i;
	std::cout << " , ���� count Ϊ " << count << std::endl;
}
//��������
int main()
{
	while (count--)
	{
		func();
	}
	getchar();
	return 0;
}
