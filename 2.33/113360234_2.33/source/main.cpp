#include <stdio.h>
#include <stdlib.h>

float miles, CostPerLiter, MilesPerLiter, ParkingFees, tolls, totalcost;

int main(void) {
	printf("input total miles(km) driven per day:");
	scanf_s("%f", &miles);
	printf("\n");
	printf("input cost per liter of gasoline:");
	scanf_s("%f", &CostPerLiter);
	printf("\n");
	printf("Please enter average miles per liter:");
	scanf_s("%f", &MilesPerLiter);
	printf("\n");
	printf("Please enter parking fees per day:");
	scanf_s("%f", &ParkingFees);
	printf("\n");
	printf("Please enter tolls per day:");
	scanf_s("%f", &tolls);
	printf("\n");

	totalcost = miles / MilesPerLiter * CostPerLiter + ParkingFees + tolls;
	printf("cost per day of driving to work is $ %1.f", totalcost);

	system("pause");
	return 0;
}