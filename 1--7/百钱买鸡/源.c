#include <stdio.h>
int main()
{
	int a, b, c;
	for (a = 0; a <= 100; a++)
		{
		for (b = 0; b <= 100; b++)
			{
			for (c = 0; c <= 100; c++)
				{
				if (5 * a + 3 * b + c / 3 == 100 && c % 3 == 0 && a + b + c == 100)
					{
					printf("%d %d %d\n", a, b, c);
					}
				}
			}
		}

	return 0;
/*	
	书上的写法
	 int cock,hen,chick;   /*定义变童为基本整型*/

	for (cock = 0; cock <= 20; cock++)   /*公鸡范围在 0~20 之间*/

		for (hen = 0; hen <= 33; hen++)   /*母鸡范围在 0~33 之间*/

			for (chick = 3; chick <= 99; chick++)   /*小鸡范围在 3~99 之间*/

				if (5 * cock + 3 * hen + chick / 3 == 100)   /*判断钱数是否等于 100*/

					if (cock + hen + chick == 100)   /*判断购买的鸡数是否等于 100*/

						if (chick % 3 == 0)   /*判断小鸡数是否能被 3 整除*/

*/


}