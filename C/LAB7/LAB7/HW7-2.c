#include <stdio.h>
int main(void) {
	char c;
	printf("Enter an operand : ");
	scanf_s("%c", &c);
	int num, num1, num2;
	printf("Enter a first operand : ");
	scanf_s("%d", &num);
	printf("Enter a second operand : ");
	scanf_s("%d", &num1);
	switch (c)
	{
	case '+':
		printf("%d + %d = ", num, num1);
		scanf_s("%d", &num2);
		if (num1 + num == num2) {
			printf("Right answer");
		}
		else {
			printf("Wrong!\n");
			printf("%d is the right answer", num1 + num);
		}
		break;
	case '*':
		printf("%d * %d = ", num, num1);
		scanf_s("%d", &num2);
		if (num1 * num == num2) {
			printf("Right answer");
		}
		else {
			printf("Wrong!\n");
			printf("%d is the right answer", num1 * num);
		}
		break;
	}
}