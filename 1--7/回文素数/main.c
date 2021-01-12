#include <stdio.h>
int sushu(int i)
{
	int j;
	if (i <= 1)
		return 0;
	if (i == 2)
		return 1;
	for (j = 2; j < i; j++)
	{
		if (i%j == 0)
			return 0;
		else if (i != j + 1)
			continue;
		else
			return 1;
	}
}

int main()
{
	int i;
	for (i = 10; i < 1000; i++)
		if (sushu(i) == 1)
			if (i / 100 == 0)
			{
				if (i / 10 == i % 10)
					printf("%2d", i);
				if (i % 5 == 0)
					printf("\n");
			}
			else
				if (i / 100 == i % 10)
					printf("%2d", i);
	if (i % 5 == 0)
		printf("\n");
	return 0;
}