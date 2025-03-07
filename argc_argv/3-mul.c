#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Integrer
 * @argv: array of value
 *
 * Return: 0 for sucess 1 for faillure
 */

int main(int argc, char *argv[])
{
	int num1, num2, sum;

	(void)argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);
	return (0);

}
