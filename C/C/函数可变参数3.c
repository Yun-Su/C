#include <stdio.h>
#include <stdarg.h>
double average(int num, ...)
{
    va_list valist;
    //va_list���� va_start va_arg va_end��va_copy������Ϣ
    
    double sum = 0.0;
    va_start(valist, num);
    /* Ϊ num ��������ʼ�� valist */
    //va_start������Է��ʿɱ����
    /* �������и��� valist �Ĳ��� */
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
        //va_arg������һ�������ɱ����
    }
    va_end(valist);
    /* ����Ϊ valist �������ڴ� */
    //va_end���������ɱ�������г�
    return sum / num;
}
int main()
{
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
}