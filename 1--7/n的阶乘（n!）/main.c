#include <stdio.h>
int main()
{
	int i, n;
	double sum = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum * i;
	printf("%lf",sum);
	
	return 0;
}