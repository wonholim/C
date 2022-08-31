#include <stdio.h>
int main(void) {
	int a;
	printf("Enter a number : ");
	scanf_s("%d", &a);
	int b = a;
	int i = 1;
	a++;
	while (a --> 1) {
		i = i * a;
	}
	printf("%d의 Factorial 값은 %d 이다.\n", b, i);
}