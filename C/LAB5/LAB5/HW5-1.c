#include <stdio.h>
int main(void) {
	const double pi = 3.141592;
	int a;
	printf("Enter a radius: ");
	scanf_s("%d", &a);
	double area = (double)(a * a * pi);
	printf("The area of a circle with %d:\t%lf", a, area);
}