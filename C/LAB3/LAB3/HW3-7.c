#include <stdio.h>
int main(void) {
	int a, b, c;
	printf("Enter h m s: ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("---Calculation Result---\n");
	printf("Total %d seconds", a * 3600 + b * 60 + c);
}