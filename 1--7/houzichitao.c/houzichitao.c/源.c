#include <stdio.h>
int main()
{
	int a, b, c;
	a = 1;
	
	for (b = 1; b < 10; b++)
	{
		a = (a + 1) * 2;

	}
	printf("%d", a);
	return 0;

	/*
	�α��Ĵ�
	#include <stdio.h>
int main()
{
	intday,x1,x2;    ���� day��x1��x2 3 ���䶭Ϊ��������
	day = 9;
	x2 = 1;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;    ��һ����������ǵڶ�����������1���2��
		x2 = x1;
		day--;    ��Ϊ�Ӻ���ǰ�����������ݼ�

	}
	printf("the total is %d\n", x1);     ������ӵ�����
	return 0;
}
	*/
}