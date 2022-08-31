#include <stdio.h>
int main(void) {
	int max = -1;
	int min = 101;
	int a;
	printf("Enter the number of scores: ");
	scanf_s("%d", &a);
	int even;
	for (int i = 0; i < a; i++) {
		printf("Enter a score : ");
		scanf_s("%d", &even);
		if (even > max) {
			max = even;
		}
		if (even < min) {
			min = even;
		}
	}
	if (a != 0) {
		printf("The best score is %d\n", max);
		printf("The worst score is %d", min);
	}
	else {
		printf("no data");
	}
	
}