#include <stdio.h>
int main(void) {
	int a, b;
	int count = 0;
	printf("몇단을 연습 하시겠습니까? :");
	scanf_s("%d", &a);
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = ", a, i);
		scanf_s("%d", &b);
		if (b == a * i) {
			count++;
		}
	}
	printf("%d 단의 구구단에서 %d개를 맞았습니다", a, count);
}