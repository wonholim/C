#include <stdio.h>
int main(void) {
	int totalMinute = 200;
	printf("%dºÐ:\n", totalMinute);
	printf("%dh %dm\n", totalMinute / 60, totalMinute % 60);
}