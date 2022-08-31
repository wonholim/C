#include <stdio.h>
int main(void) {
	char gender;
	int height, weight;
	printf("Enter your gender(M/F) :");
	scanf_s("%c", &gender);
	if (gender == 'F') {
		printf("Enter your height :");
		scanf_s("%d", &height);
		printf("Enter your weight :");
		scanf_s("%d", &weight);
		if (height <= weight + 110) {
			printf("You need a diet. Try harder");
		}
		else {
			printf("You do NOT need a diet. Keep exercising");
		}
	}
	else {
		printf("Sorry, this fitness center is for women only.");
	}
}