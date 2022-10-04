#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2;

	printf("Please input two numbers: \n");
	scanf_s("%d%d", &num1, &num2);

	if (num2 % num1 == 0) {
		printf("%d is a multiple of %d\n",num2, num1);
	}
	else
	{
		printf("%d is not a multiple of %d\n", num2, num1);
	}
}