#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Function to check if the value in the array
 * are number
 * @num: Integrer
 *
 * Return: 0 for success 1 for failure
 */

int is_number(char *num)
{
	int i = 0;

	if (num[i] == '-')
	{
		i++;
	}

	while (num[i])
	{
		if (!isdigit(num[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - Entry point of the program
 * @argc: Integrer to know the size of the array argv
 * @argv: an array to stock value
 *
 * Return: 0 for success 1 for failure
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for(i = 1; i < argc; i++)
		{
			if (!is_number(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	return (0);
}
