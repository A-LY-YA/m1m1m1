#include <stdio.h>
#include <stdlib.h>

int main() {
	int line;  
	int column;  
	int i; 
	int j;  

	printf("���������ε�����(����)��");
	scanf_s("%d", &line);
	if (line % 2 == 0) {  
		printf("��������������\n");
		exit(1);
	}
	column = line;  

	for (i = 1; i <= line; i++) {  
		if (i < (line + 1) / 2 + 1) {  
			for (j = 1; j <= column; j++) {  
				if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		else {  
			for (j = 1; j <= column; j++) {  
				if ((column + 1) / 2 - (line - i) <= j && j <= (column + 1) / 2 + (line - i)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}