#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int i, j;
	srand((unsigned)time(NULL));
	//使用time函数设置一个随机数种子
	for (int i = 0; i < 10; i++)
	{
		j = rand();
		//随机函数rand()
		cout << "随机数:" << j << endl;
	}
	getchar();
	return 0;

}