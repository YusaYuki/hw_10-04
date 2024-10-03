#include <stdio.h>
#include <stdlib.h>

int n, a;

int main(void) {
	printf("input a int : ");
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		printf("%d is even.\n", n);
	}
	else {
		printf("%d is odd.\n", n);
	}
	system("Pause");
	return 0;
}