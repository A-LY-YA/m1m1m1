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
	���ϵ�д��
	 int cock,hen,chick;   /*�����ͯΪ��������*/

	for (cock = 0; cock <= 20; cock++)   /*������Χ�� 0~20 ֮��*/

		for (hen = 0; hen <= 33; hen++)   /*ĸ����Χ�� 0~33 ֮��*/

			for (chick = 3; chick <= 99; chick++)   /*С����Χ�� 3~99 ֮��*/

				if (5 * cock + 3 * hen + chick / 3 == 100)   /*�ж�Ǯ���Ƿ���� 100*/

					if (cock + hen + chick == 100)   /*�жϹ���ļ����Ƿ���� 100*/

						if (chick % 3 == 0)   /*�ж�С�����Ƿ��ܱ� 3 ����*/

*/


}