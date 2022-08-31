#include <stdio.h>
int main(void) {
	int a;
	printf("Enter the total minutes:");
	scanf_s("%d", &a);
	printf("%d minutes\n", a);
	int b = a / 60;
	int c = a % 60;
	printf("%dh %dm\n", b, c);
}