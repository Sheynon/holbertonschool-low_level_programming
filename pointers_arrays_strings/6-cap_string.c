#include "main.h"

/**
 * cap_string - Function to execute in the program
 * @str: First integrer
 *
 * Description: Function that capitalize all the words of a string
 *
 * Return: Return "str"
 */

char *cap_string(char *str)
{
	int a = 0;
	int b = 1;

	while(str[a] != '\0')
	{
		if (str[a] == ' ' || str[a] == '\t' || str[a] == '\n' || str[a] == ',' || str[a] == ';' || str[a] == '.' || str[a] == '!' || str[a] == '?' || str[a] == '"' || str[a] == '(' || str[a] == ')' || str[a] == '{' || str[a] == '}')
		{
			b = 1;
		}
		else if (b && str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
			b = 0;
		}
		else
		{
			b = 0;
		}
	}

	return (str);
}
