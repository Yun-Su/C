#include<stdio.h>
#include<Windows.h>//windows����
int main()
{
	printf("hello.world\n");
	MessageBox(0, "����ǶԻ�������", "�Ի������", 0);
	                                  /*����0Ϊϵͳ���������ڣ�
										  ���Ի������ݡ���
										  ���Ի�����⡱
										  0Ϊ�Ի�������*/
	ShellExecute(0, "open", "http://www.moe123.com", 0, 0, 1);//����
	ShellExecute(0, "open", "D:\\��֮��Ӳ�̰�\\��֮��\\natsu101_chs.exe", 0, 0, 1);
/*��ĳ·���µ��ļ���ĳ��վ,ע���ļ�·����Ҫ����˫б�ܣ�C��Ĭ��ʶ��//Ϊ/*/
	ShellExecute(0, "open", "notepad", 0, 0, 1);//ϵͳ��������Ҫע��·��
	getchar();
	return 0;
}