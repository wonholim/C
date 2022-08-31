#include <stdio.h>
int main(void) {
	int score;
	printf("Enter your Good score :");
	scanf_s("%d", &score);
	if (score >= 80) {
		printf("A");
	}
	else if(score >= 50) {
		printf("B");
	}
	else if (score >= 30) {
		printf("C");
	}
	else if (score < 30) {
		printf("F");
	}
}