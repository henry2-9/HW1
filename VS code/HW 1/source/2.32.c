#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float height, weight,bmi;

	printf("Please input your height in meter: \n");
	scanf_s("%f",&height);
	printf("Please input your weight in kg: \n");
	scanf_s("%f", &weight);

	bmi = weight / (height * height);
	printf("Your BMI is: %.2f\n", bmi);

	if (bmi < 18.5) {
		printf("Your BMI grade is underweight");
	}
	else if (bmi < 24.9) {
		printf("Your BMI grade is normal");
	}
	else if (bmi < 29.9) {
		printf("Your BMI grade is overweight");
	}
	else if (bmi > 30) {
		printf("Your BMI grade is obese");
	}
	return 0;
}
