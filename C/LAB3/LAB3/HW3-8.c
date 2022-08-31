#include <stdio.h>
int main(void) {
	int a, b;
	printf("밑변과 높이를 입력하세요: ");
	scanf_s("%d %d", &a, &b);
	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d 이다.\n", a, b, a * b / 2);
	printf("직사각형의 가로와 높이를 입력하세요: ");
	scanf_s("%d %d", &a, &b);
	printf("가로와 세로가 각각 %d와 %d인 직사각형의 둘레와 넓이는 %d와 %d이다.\n", a, b, 2 * a + 2 * b, a * b);
}