#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print all number from 1 to 100
 * Print Fizz for multiple of 3
 * Print Buzz for multiple of 5
 * Print FizzBuzz for both
 * Separate each number by a space
 *
 * return: Always 0 (success)
 */

int main(void)
{
	int a, b;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
