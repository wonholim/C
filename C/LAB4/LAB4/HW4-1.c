#include <stdio.h>
int main(void) {
	int x, y, result;
	x = 10;
	y = 3;

	result = x & y;
	printf("AND ���� ��� : %d\n", result);

	result = x | y;
	printf("OR ���� ��� : %d\n", result);

	result = x ^ y;
	printf("XOR ���� ��� : %d\n", result);

	result = ~x;
	printf("NOT ���� ��� : %d\n", result);

	x = 8;
	result = x << 2;
	printf("<< 2 ���� ���: %d\n", result);

	x = 8;
	result = x >> 1;
	printf(">> 1 ���� ���: %d\n", result);
}