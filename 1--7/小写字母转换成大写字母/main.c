#include <stdio.h>
int main()
{
	char a, b;
	
	a = getchar();
	b = a - 32;
	printf("%c��%d\n", b, b);
	return 0;
}