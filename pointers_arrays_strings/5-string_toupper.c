#include "main.h"

/**
 * string_toupper -  Function to execute in the program
 * @*: First integrer
 *
 * Description: Function that change all the lowercase letters
 * in uppercase one
 *
 * Return: Return "str"
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - ('a' - 'A');
		a++;
	}
	return (str);
}
