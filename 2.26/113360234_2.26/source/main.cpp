#include <stdio.h>
#include <stdlib.h>

int n1, n2;

int main(void) {

	printf("input first num : ");
	scanf_s("%d", &n1);
	printf("input second num : ");
	scanf_s("%d", &n2);

	if (n2 % n1 == 0)
	{
		printf("%d is multiple of %d\n", n1, n2);
	}
	else
	{
		printf("%d is not multiple of %d\n", n1, n2);
	}


	system("Pause");
	return 0;
}