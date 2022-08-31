#include <stdio.h>
int main(void) {
	int max = 0;
	int even;
	for (int i = 0; i < 5; i++) {
		printf("Enter an score : ");
		scanf_s("%d", &even);
		if (even > max) {
			max = even;
		}
	}
	printf("The best score is %d", max);
}