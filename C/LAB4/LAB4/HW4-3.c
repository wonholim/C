#include <stdio.h>
int main(void) {
	int a;
	printf("10������ �Է�:");
	scanf_s("%d", &a);
	printf("10���� %d�� 16������ %x�̴�\n", a, a);
	printf("16������ �Է�:");
	scanf_s("%x", &a);
	printf("16���� %x�� 10������ %d�̴�\n", a, a);
}