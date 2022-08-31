#include <stdio.h>
int main(void) {
	printf("%f %e %E\n", 0.0023456789, 0.0023456789, 0.0023456789);
	printf("%f %e %E\n", 23456789.0, 23456789.0, 23456789.0);

	printf("----|----|\n");
	printf("%d%d\n", 123, 123);
	printf("%5d%5d\n", 123, 123);
	printf("%-5d%-5d\n", 123, 123);

	printf("%10f\n", 0.4567);
	printf("%.2f\n", 0.4567);
	printf("%10.2f\n", 0.4567);
}