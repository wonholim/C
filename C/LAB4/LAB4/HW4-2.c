#include <stdio.h>
int main(void) {
	int a;
	printf("10진수를 입력:");
	scanf_s("%d", &a);
	printf("10진수 %d의 16진수는 %x이다", a, a);
}