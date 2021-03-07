#include <stdio.h>
int main()
{
	int n,i,j;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
			putchar(' ');
		for (j = 0; j < 2 * i; j++)
			putchar('*');
		putchar('\n');
	}



	return 0;
}