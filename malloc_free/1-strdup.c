#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function to execute in the program
 * @str: Integrer
 *
 * Return: return NULL if str=NULL or insuficient memory
 * is available. Return a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		a[i] = str [i];

	return (a);
}
