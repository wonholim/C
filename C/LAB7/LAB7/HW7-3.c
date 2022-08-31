#include <stdio.h>
int main(void) {
	int a;
	int i = 1;
	printf("Enter a number : ");
	scanf_s("%d", &a);
	while (i != a + 1) {
		printf("%d\n", i * i * i);
		i++;
	}
}