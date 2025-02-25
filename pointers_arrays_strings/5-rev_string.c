#include "main.h"

/**
 * rev_string - Function to execute in the program
 * @s: first integrer
 *
 * Description: Function to reverse a string
 */

void rev_string(char *s)
{
	int a = 0, b;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a / 2; b++)
	{
		c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
	}
}
