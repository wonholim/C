#include <stdio.h>
int main(void) {
	int a, b;
	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &a, &b);
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d �̴�.\n", a, b, (a * b) / 2);
}