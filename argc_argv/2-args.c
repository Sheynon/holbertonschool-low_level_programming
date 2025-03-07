#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Integrer
 * @argv: Array of value
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
