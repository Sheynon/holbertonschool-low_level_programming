#include "main.h"
#include <stdlib.h>
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
	unsigned int i, j, len_s1 = 0, len_s2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	if (n < len_s2)
		len_s2 = n;

	result = malloc(sizeof(char) * (len_s1 + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		result[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		result[i + j] = s2[j];

	return (result);
}
