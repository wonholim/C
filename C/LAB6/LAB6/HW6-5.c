#include <stdio.h>
int main(void) {
	char grade;
	int score;
	printf("Enter your student grade(A or F) :");
	scanf_s("%c", &grade);
	if (grade == 'A') {
		printf("Enter your Good score :");
		scanf_s("%d", &score);
		printf("������ %d�̸� ���� ������ �´� ����. ��� ������ �ϼ���.", score);
	}
	else {
		printf("Enter your BAD score :");
		scanf_s("%d", &score);
		printf("������ %d ���̶�� �� ������ �ؾ߰ڳ׿�.", score);
	}
}