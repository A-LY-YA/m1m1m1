#include <stdio.h>
#include <math.h>
int main()
{
	double x1, y1, z1, x2, y2, z2, distance;
	printf("�������һ��������꣺\nx1=");
	scanf_s("%lf", &x1);
	printf("y1=");
	scanf_s("%lf", &y1);
	printf("z1=");
	scanf_s("%lf", &z1);
	printf("������ڶ���������꣺\nx2=");
	scanf_s("%lf", &x2);
	printf("y2=");
	scanf_s("%lf", &y2);
	printf("z2=");
	scanf_s("%lf", &z2);
	distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) + (z2 - z1)*(z2 - z1));
	printf("������֮��ľ���Ϊ��%lf\n", distance);
	return 0;
}
