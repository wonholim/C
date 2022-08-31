#include <stdio.h>
int main(void) {
	int num;
	printf("Enter a number: ");
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
		printf("Spring");
		break;
	case 2:
		printf("Summer");
		break;
	case 3:
		printf("Fall");
		break;
	case 4:
		printf("Winter");
		break;
	default:
		printf("Invalid number");
		break;
	}
}