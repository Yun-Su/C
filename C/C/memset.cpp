#include<stdio.h>
#include<Windows.h>
int main()
{
	char a[30] = "china is great";
	memset(a, 'A',5);//�ӵ�ַa����ʼ���ַ���A�����5������Ԫ��
	printf("%s\n",a);//???????????????????????????
	int b[10];
	memset(b, 0, 40);//����ʮ���ֽڵ�int�����飨intռ���ĸ��ֽڣ���������
	                  //memset�ĵ�һ��������һ����ָ�룬
                      //����ζ�������Խ����κ����͵�ָ�룬���ߵ�ַ
	for (int i = 0; i < 10; i++)
	{
		printf("%4d\n", b[i]);

	}
	system("pause");
}