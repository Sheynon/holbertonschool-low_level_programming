#include "main.h"

/**
 * _strcmp - Function to execute in the program
 * @s1: first integrer
 * @s2: second integrer
 *
 * Description: Fonction to compare two string
 *
 * Return: return 0 if the string are exactly identic
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
