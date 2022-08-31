#include <stdio.h>
int main(void) {
	int a, b;
	printf("Enter the number of rows : ");
	scanf_s("%d", &a);
	printf("Enter the number of columns : ");
	scanf_s("%d", &b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("*");
		}
		printf("\n");
	}
}