#include <stdio.h>
int main()
{
	int i, j, i1, j1, a[101][101], b[101][101];
	printf("����\n");
	scanf_s("%d", &i1);
	printf("����\n");
	scanf_s("%d", &j1);
	printf("\n");
	for (i = 0; i < i1; i++)
		for (j = 0; j < j1; j++)
			scanf_s("%d", &a[i][j]);
	printf("һ��ʼ�Ľ����\n");
	for (i = 0; i < i1; i++)
	{
		for (j = 0; j < j1; j++)
			printf("\t%d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < i1; i++)
		for (j = 0; j < j1; j++)
			b[j][i] = a[i][j];
	printf("�ĺ��\n");
	for (i = 0; i < j1; i++)
	{
		for (j = 0; j < i1; j++)
			printf("\t%d", b[i][j]);
		printf("\n");
	}
	return 0;
}