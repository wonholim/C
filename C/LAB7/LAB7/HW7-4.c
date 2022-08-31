#include <stdio.h>
int main(void) {
	int a;
	int i = 1;
	printf("Enter a number : ");
	scanf_s("%d", &a);
	while (i <= a) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
		else if (i % 5 == 0) {
			printf("%d ", i);
		}
		i++;
	}
}