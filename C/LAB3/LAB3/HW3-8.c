#include <stdio.h>
int main(void) {
	int a, b;
	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &a, &b);
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d �̴�.\n", a, b, a * b / 2);
	printf("���簢���� ���ο� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &a, &b);
	printf("���ο� ���ΰ� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�.\n", a, b, 2 * a + 2 * b, a * b);
}