#include<stdio.h>
#include<Windows.h>
int main()
{
	char a[30] = "china is great";
	memset(a, 'A',5);//从地址a处开始用字符‘A’填充5个数组元素
	printf("%s\n",a);//???????????????????????????
	int b[10];
	memset(b, 0, 40);//对四十个字节的int形数组（int占用四个字节）进行清零
	                  //memset的第一个参数是一个空指针，
                      //这意味着它可以接受任何类型的指针，或者地址
	for (int i = 0; i < 10; i++)
	{
		printf("%4d\n", b[i]);

	}
	system("pause");
}