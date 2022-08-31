#include <stdio.h>
int main(void) {
	int a;
	printf("Enter a number :");
	scanf_s("%d", &a);
	long long sum;
	for (int i = 1; i <= a; i++) {
		sum = 1;
		for (int j = 1; j <= i; j++) {
			sum = sum * j;
		}
		printf("%d! = %lld\n", i, sum);
	}
}