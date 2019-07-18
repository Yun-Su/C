#include<stdio.h>
#include<time.h>
int main()
{
	time_t seconds;
	seconds = time(NULL);
	printf("自从1970_01_01已经过去了%d秒\n", seconds);
	getchar();
	return 0;
}