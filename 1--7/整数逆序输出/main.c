#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	while (num)
	{
		printf("%d", num % 10);
		num /= 10;
	}


	return 0;
}