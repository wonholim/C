#include <stdio.h>
int main(void) {
	int a;
	int i = 1;
	int j = 0, k = 1;
	printf("Enter a number : ");
	scanf_s("%d", &a);
	while (i <= a) {
		j += 3;
		k *= 3;
		i++;
	}
	printf("3�� %d �� ���� ���� %d �̴�.\n", a, j);
	printf("3�� %d �� ���� ���� %d �̴�.\n", a, k);
}