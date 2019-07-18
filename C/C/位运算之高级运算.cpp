#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned char ch1 = 73;
	unsigned short ch2 = 16385;
	//对以上两个数据进行末位清零
	printf("ch1=%d\nch2=%d\n", ch1&~1, ch2&~1);

	//   ~1相与73
	//       ‭01001001
	//              0‬
	getchar();
	return 0;
}