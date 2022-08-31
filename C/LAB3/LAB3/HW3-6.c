#include <stdio.h>
int main(void) {
	int a;
	printf("Enter the total seconds: ");
	scanf_s("%d", &a);
	printf("---Calculation Result---\n");
	printf("%d seconds\n", a);
	printf("%dh %dm %ds", a / 3600, a % 3600 / 60, a % 3600 % 60);
}