#include "main.h"

/**
 * leet - function to execute in the program
 * @c: first integrer
 *
 * Description: Function to encode a string in 1337
 *
 * Return: Return "c"
 */

char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";
	int i = 0, j;
	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_nums[j];
			}
		}
		i++;
	}

	return str;
}

