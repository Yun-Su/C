#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//�����ַ����ػ�
int main()
{
	wchar_t ch = L'��';
	//L ��ʾ���ַ����߿��ַ���
	printf("���ִ�СΪ%d�ֽ�\n", sizeof(ch));
	//���ַ��ַ���ռ�����ֽ�
	setlocale(LC_ALL, "chs");
	//�������Ա��ػ���chs ���� china simply���ļ���
	wprintf(L"%c\n", ch);
	//������ַ�
	wchar_t a[50] = L"��������������";
	wprintf(L"%s\n",a);
	getchar();
}