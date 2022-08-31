#include <stdio.h>
int main(void) {
	const int BASE = 32;
	const double CONVERSION_FACTOR = 9.0 / 5.0;
	double celsius, fahrenheit;
	printf("Enter a celsius temperature: ");
	scanf_s("%lf", &celsius);
	fahrenheit = celsius * CONVERSION_FACTOR + BASE;
	printf("Fahrenheit Equivalent : %lf\n", fahrenheit);
}