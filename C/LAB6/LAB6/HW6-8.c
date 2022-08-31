#include <stdio.h>
int main(void) {
	char grade;
	int score;
	printf("Enter your grade :");
	scanf_s("%c", &grade);

	if (grade == 'A') {
		printf("Congratulation");
	}
	else if(grade == 'B') {
		printf("Okay, try harder");
	}
	else if (grade == 'C') {
		printf("Enter your score :");
		scanf_s("%d", &score);
		printf("Try harder, you need to get %d next time", score+10);
	}
	else if (grade == 'D') {
		printf("Sorry, you should take this course again");
	}
	else if (grade == 'F') {
		printf("Sorry, you should take this course again");
	}
	else {
		printf("Wrong grade");
	}
}