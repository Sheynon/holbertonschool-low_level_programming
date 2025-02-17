#include <stdio.h>

/**
 *main - Entry point of the program
 *
 * Description: Prints "and that piece of art is useful\"
 * - Dora Korpar, 2015-10-19"
 *
 * Return: Always return 1 (error)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, message, 56);
	return (1);
}
