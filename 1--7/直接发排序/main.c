#include <stdio.h>
int main()
{
	int i, j, t, a[10], k;
	for (j = 0; j < 10; j++)
		scanf_s("%d", &a[j]);
	for (i = 0; i < 9; i++)
	{
		k = i;
		for (j = i + 1; j < 10; j++)
			if (a[k] > a[j])
				k = j;
		if (i = k)
		{
			t = a[k];
			a[k] = a[i];
			a[i] = t;
		}

		for (j = 0; j < 10; j++)
			printf("%d", a[j]);
	}

	return 0;
}