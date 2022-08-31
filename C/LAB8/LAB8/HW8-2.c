#include <stdio.h>
int main(void) {
	int a;
	printf("Enter a number :");
	scanf_s("%d", &a);
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
}