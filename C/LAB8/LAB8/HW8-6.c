#include <stdio.h>
int main(void) {
	int a, b;
	int count = 0;
	printf("����� ���� �Ͻðڽ��ϱ�? :");
	scanf_s("%d", &a);
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = ", a, i);
		scanf_s("%d", &b);
		if (b == a * i) {
			count++;
		}
	}
	printf("%d ���� �����ܿ��� %d���� �¾ҽ��ϴ�", a, count);
}