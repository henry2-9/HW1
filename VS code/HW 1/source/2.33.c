#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float kilometers, cost, average, parking, tolls, total_cost;

	printf("Total kilometers drive per day:");
	scanf_s("%f", &kilometers);
	printf("Per liters of gasoline cost:");
	scanf_s("%f", &cost);
	printf("Average kilometers per liters:");
	scanf_s("%f", &average);
	printf("Parking fees per day:");
	scanf_s("%f", &parking);
	printf("Tolls per day:");
	scanf_s("%f", &tolls);

	total_cost = (kilometers / average) * cost + parking + tolls;
	printf("Total driving cost per day is: %.2f", total_cost);
	return 0;
}