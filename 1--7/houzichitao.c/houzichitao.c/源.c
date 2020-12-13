#include <stdio.h>
int main()
{
	int a, b, c;
	a = 1;
	
	for (b = 1; b < 10; b++)
	{
		a = (a + 1) * 2;

	}
	printf("%d", a);
	return 0;

	/*
	课本的答案
	#include <stdio.h>
int main()
{
	intday,x1,x2;    定义 day、x1、x2 3 个变董为基本整型
	day = 9;
	x2 = 1;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;    第一天的桃子数是第二天桃子数加1后的2倍
		x2 = x1;
		day--;    因为从后向前推所以天数递减

	}
	printf("the total is %d\n", x1);     输出桃子的总数
	return 0;
}
	*/
}