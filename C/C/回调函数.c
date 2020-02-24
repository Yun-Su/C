#include<stdio.h>
int max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("input three numbers \n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	int (*p)(int x, int y) = &max;
	//用一个函数指针来实现函数回调
	//你到一个商店买东西，刚好你要的东西没有货，于是你在店员那里留下了你的电话，过了几天店里有货了，店员就打了你的电话，然后你接到电话后就到店里去取了货。在这个例子里，你的电话号码就叫回调函数，你把电话留给店员就叫登记回调函数，店里后来有货了叫做触发了回调关联的事件，店员给你打电话叫做调用回调函数，你到店里去取货叫做响应回调事件。
	printf("the max number is %d ",p(p(a, b), c));
	return 0;
}