#include<stdlib.h>
#include<stdio.h>

int x, y, z,tmp;


int main(void)
{
	printf("input  number 1 : ");
	scanf_s("%d", &x);
	printf("input  number 2 : ");
	scanf_s("%d", &y);
	printf("input  number 3 : ");
	scanf_s("%d", &z);

	if (x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}

	if (y > z)
	{
		tmp = y;
		y = z;
		z = tmp;
	}

	if (x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}

	printf("the minimum is %d", x);
	printf("\n");
	printf("the maximum is %d", z);

	system("Pause");
	return 0;
}