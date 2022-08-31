#include <stdio.h>
int main(void) {
	int a, b, c;
	printf("Enter two scores :");
	scanf_s("%d %d", &a, &b);
	c = (a + b) / 2;
	printf("The average is %d", c);
}