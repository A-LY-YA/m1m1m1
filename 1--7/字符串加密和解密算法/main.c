#include <stdio.h>
#include <string.h>
int main()
{
	int result = 1;//设计一个无限循环
	int i;
	int count = 0;
	char text[128] = { '\0' };
	char cryptograph[128] = { '\0' };

	while (1)
	{
		if (result == 1)
		{
			printf("输入\n");
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
			printf("重新输入");
		}
	}
	printf("输入1加密新的明文，输入2对刚加密的密文进行解密，输入3退出系统：\n");
	printf("请输入命令符：\n");
	scanf_s("%d", &result);


	return 0;
}