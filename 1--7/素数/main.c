#include <stdio.h>
int main() {
	int a = 0;  
	int num = 0;  
	printf("输入一个整数：");
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			a++;  
		}
	}
	if (a == 0) { 
		printf("%d是素数。\n", num);
	}
	else {
		printf("%d不是素数。\n", num);
	}
	return 0;
}