#include <stdio.h>
int main(void) {
	int a;
	int score;
	int sum = 0;
	printf("Enter a student : ");
	scanf_s("%d", &a);
	int b = a;
	while (a --> 0) {
		printf("Enter a score : ");
		scanf_s("%d", &score);
		sum = sum + score;
	}
	printf("The total is %d\n", sum);
	printf("The avg is %.1lf\n", (double)sum/b);
}