#define Max233 15
//����Max233��ֵΪ15
#undef Max233
#define Max233 25
//ȡ���Ѷ����Max233,Ȼ����Ϊ25
#include "ͷ�ļ�����.h"
//����cpp�ӱ���Ŀ¼�л�ȡ �Զ����ͷ�ļ�����ӵ���ǰ�ļ���
#ifndef max123
#define max123 345
#endif 
//����cpp��max123δ�����ʱ��,��max123����Ϊ345
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
//�궨��һ��д���µ�ʱ�� �Ӹ� '\'������

#define f(n) printf("y"#n"=%d",y##n)
//
//�궨���ڵı��ճ�������
int main()
{
    int y5 = 128;
    f(5);
    //��ʵ��f(5)�滻Ϊprintf("y5=%d",y5);
}