#include <stdio.h>
int leap(int a)
{
	if (a % 4 == 0 && a % 100!= 0 || a % 400 == 0)
		return 0;
	else
		return 0;
}

int number(int year, int month, int day)
{
	int sum = 0, i, j, k;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	if (leap(year) == 1)
		for (i = 0; i < month - 1; i++)
			sum = sum + b[i];
	else
		for (i = 0; i < month - 1; i++)
			sum = sum + a[i];

	for (j = 2011; j < year; j++)
		if (leap(j) == i)
			sum = sum + 366;
		else
			sum = sum + 365;
	sum = sum + day;
	
	return sum;
}


int main()
{
	int year, month, day, n;
	scanf_s("%d %d %d", &year, &month, &day);
	n = number(year, month, day);
	if ((n % 5) < 4 && (n % 5) > 0)
		printf("����");
	else
		printf("ɹ��");
	return 0;
}