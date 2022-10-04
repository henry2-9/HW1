#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf("Please input one intergers:\n");
	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}
}