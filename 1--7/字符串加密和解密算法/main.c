#include <stdio.h>
#include <string.h>
int main()
{
	int result = 1;//���һ������ѭ��
	int i;
	int count = 0;
	char text[128] = { '\0' };
	char cryptograph[128] = { '\0' };

	while (1)
	{
		if (result == 1)
		{
			printf("����\n");
			scanf_s("%s", &text);
			count = strlen(text);
			for (i = 0; i < count; i++)
			{
				cryptograph[i] = text[i] + i + 5;
			}
			cryptograph[i] = '\0';
			printf("%s\n", cryptograph);

		}
		else if (result == 2)
		{
			count = strlen(text);
			for (i = 0; i < count; i++)
			{
				cryptograph[i] = text[i] - i - 5;
			}
			cryptograph[i] = '\0';
			printf("%s\n", cryptograph);
		}
		else if (result == 3)
		{
			break;
		}
		else
		{
			printf("��������");
		}
	}
	printf("����1�����µ����ģ�����2�Ըռ��ܵ����Ľ��н��ܣ�����3�˳�ϵͳ��\n");
	printf("�������������\n");
	scanf_s("%d", &result);


	return 0;
}