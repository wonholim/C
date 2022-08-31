#include <stdio.h>
int main(void) {
	int a;
	int b;
	int c;
	printf("Enter hour : ");
	scanf_s("%d", &a);
	printf("Enter minutes : ");
	scanf_s("%d", &b);
	c = 60 * a + b;
	printf("Total %d minutes", c);
}