#include <stdio.h>
int main(void) {
	int x, y, result;
	x = 10;
	y = 3;

	result = x & y;
	printf("AND 연산 결과 : %d\n", result);

	result = x | y;
	printf("OR 연산 결과 : %d\n", result);

	result = x ^ y;
	printf("XOR 연산 결과 : %d\n", result);

	result = ~x;
	printf("NOT 연산 결과 : %d\n", result);

	x = 8;
	result = x << 2;
	printf("<< 2 연산 결과: %d\n", result);

	x = 8;
	result = x >> 1;
	printf(">> 1 연산 결과: %d\n", result);
}