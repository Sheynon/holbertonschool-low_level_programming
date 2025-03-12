#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to execute in the program
 * @s1: First integrer
 * @s2: Second integrer
 *
 * Return: return NULL if faillure of the string is empty.
 * return a pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int a, b, alen = 0, blen = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[alen] != '\0')
		alen++;

	while (s2[blen] != '\0')
		blen++;

	conc = malloc(sizeof(char) * (alen + blen + 1));

	if (conc == NULL)
		return (NULL);

	for (a = 0; a < alen; a++)
		conc[a] = s1[a];
	for (b = 0; b < blen; b++, a++)
		conc[a] = s2[b];

	conc[a] = '\0';

	return (conc);
}
