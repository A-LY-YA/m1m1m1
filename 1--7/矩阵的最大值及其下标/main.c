#include <stdio.h>
int main()
{
	int a[3][4], i, j, max, max_i = 0, max_j = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf_s("%d", &a[i][j]);
	max = a[0][0];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				max_i = i;
				max_j = j;
			}
	printf("max=a[%d][%d]=%d\n", max_i, max_j, max);
	return 0;
}