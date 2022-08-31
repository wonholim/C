#include <stdio.h>
int main(void) {
	int a;
	printf("Enter the # of integer : ");
	scanf_s("%d", &a);
	int count = 0;
	int even;
	for (int i = 0; i < a; i++) {
		printf("Enter an integer : ");
		scanf_s("%d", &even);
		if (even % 2 == 0) {
			count++;
		}
	}
	printf("The number of even numbers is %d", count);
}