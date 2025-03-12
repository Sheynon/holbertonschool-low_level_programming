#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - Function to execute in the program
 * @s1: First String
 * @s2: Second String
 * @n: Unsigned Integrer
 *
 * Return: NULL for fail, or return the pointer to a newly
 * allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n < len_s2)
		len_s2 = n;

	result = malloc(len_s1 + len_s2 + 1);
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, len_s2);

	return (result);
}
