#include <stdio.h>
int main(void) {
	char grade;
	int score;
	printf("Enter your grade :");
	scanf_s("%c", &grade);
	if (grade == 'A') {
	printf("Enter your score :");
	scanf_s("%d", &score);
	printf("%d ���̸� %c�� �޴� ����.", score, grade);
	}
}