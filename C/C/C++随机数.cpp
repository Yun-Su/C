#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int i, j;
	srand((unsigned)time(NULL));
	//ʹ��time��������һ�����������
	for (int i = 0; i < 10; i++)
	{
		j = rand();
		//�������rand()
		cout << "�����:" << j << endl;
	}
	getchar();
	return 0;

}