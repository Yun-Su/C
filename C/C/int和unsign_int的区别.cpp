#include <iostream>
using namespace std;
/*
 ���������ʾ���з����������޷�������֮��Ĳ��
 C++ ����ʹ���ټǷ����������޷��Ŷ��������޷��ų�������
 �����Բ�д int��ֻд���� unsigned��short �� unsigned��long��int �������ġ�
 ���磬�����������䶼�������޷������ͱ�����
*/
int main()
{
	short int i;           // �з��Ŷ�����
	short unsigned int j;  // �޷��Ŷ�����
	i = 50000;
	j = 50000;
	cout << i << " " << j<<endl;
	//i��ӡΪ-15536 j��ӡ��50000;
	getchar();
	return 0;
}