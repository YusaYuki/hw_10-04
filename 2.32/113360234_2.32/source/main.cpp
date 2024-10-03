#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float h, w, BMI;

int main(void) {

	printf("input you're height(m): ");
	scanf_s("%f", &h);
	printf("\n");
	printf("input you're weight(kg): ");
	scanf_s("%f", &w);

	BMI = w / pow(h, 2);
	printf("Your BMI is %.1f\n", BMI);

	if (BMI < 18.5)
	{
		printf("You are underweight\n");
	}
	else if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("You are nomral\n");
	}
	else if (BMI >= 25.0 && BMI <= 29.9) 
	{
		printf("You are overweight\n");
	}
	else
	{
		printf("You are obese\n)");
	}

	system("Pause");
	return 0;
}