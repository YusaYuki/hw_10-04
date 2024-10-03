#include <stdlib.h>
#include <stdio.h>



int main(void)
{
	printf("*********\n");
	
	for (int i = 0; i < 8; i++)
	{
		printf("*");
		for (int i = 0; i < 7; i++)
		{
			printf(" ");
		}
		printf("*\n");
	}
		
	printf("*********\n");
	printf("\n");
	
//---------------------------------------------

	printf("    ***\n");
	printf(" *       * \n");
	for (int i = 0; i < 7; i++)
	{
		printf("*         *\n");
	}
	printf(" *       *\n");
	printf("    ***\n");
	printf("\n");

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2-i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2*i+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 6; i++)
	{
		printf("  *\n");
	}
	printf("\n");

//-----------------------------------------------

	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			if ( j == 0 || j == 2 * i) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	for (int i = 4 - 1; i >= 0; i--) 
	{
		for (int j = 0; j < 4 - i; j++) 
		{
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			if (j == 0 || j == 2 * i)
			{
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	
	system("Pause");
	return 0;
}