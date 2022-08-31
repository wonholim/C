#include <stdio.h>
int main(void) {
	int a;
	printf("Enter the number(>=2) : ");
	scanf_s("%d", &a);
	printf("%d! = ", a);
	int i = 1;
	while (a != 1) {
		printf("%d * ", a);
		i = i * a;
		a--;
	}
	printf("1 = %d", i);
}