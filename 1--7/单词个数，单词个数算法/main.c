#include <stdio.h>
int main()
{	
	char ch;
	int i, count = 0, word = 0;
	while ((ch = getchar()) != '\n')
		if (ch == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}

	printf("%d", count);

	return 0;
}