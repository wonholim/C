#include <stdio.h>
int main(void) {
	char grade;
	int score;
	printf("Enter your student grade(A or F) :");
	scanf_s("%c", &grade);
	if (grade == 'A') {
		printf("Enter your Good score :");
		scanf_s("%d", &score);
		printf("점수가 %d이면 좋은 성적을 맞는 군요. 계속 열심히 하세요.", score);
	}
	else {
		printf("Enter your BAD score :");
		scanf_s("%d", &score);
		printf("점수가 %d 점이라니 더 열심히 해야겠네요.", score);
	}
}