#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c, small, large;
	printf("Please input three intergers:\n");
	scanf_s("%d%d%d", &a, &b, &c);
	small = a;
	large = b;

	if (b < small) {
		small = b;
	}
	if (c < small) {
		small = c;
	}
	if (a > large) {
		large = a;
	}
	if (c > large) {
		large = c;
	}

	printf("The largest interger is %d:\n", large);
	printf("The smallest interger is %d:\n", small);
	system("pause");
	return 0;
}