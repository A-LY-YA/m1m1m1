#include <stdio.h>
int main()
{
	int i, tu1, tu2, tu3, m;
	tu1 = 1;
	tu2 = 1;
	printf("�������·���\n");
	scanf_s("%d", &m);
	if (m == 1 || m == 2)
	{
		printf("һ������");
	}
	else if (m > 2)
	{
		for (i = 3; i <= m; i++)
		{
			tu3 = tu1 + tu2;
			tu1 = tu2;
			tu2 = tu3;
		}
		printf("%d �µ�������Ϊ��%d\n", m, tu3);
	}
	return 0;
}