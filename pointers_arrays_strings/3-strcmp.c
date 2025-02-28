#include "main.h"

/**
 * _strcmp -
 * @s1:
 * @s2:
 *
 * Description:
 *
 * Return:
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}

	return (s1[a] - s2[a]);
}
