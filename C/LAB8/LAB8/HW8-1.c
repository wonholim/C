#include <stdio.h>
int main(void) {
	int a;
	printf("Enter a number :");
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {
		printf("%d\n", i * i * i);
	}
}