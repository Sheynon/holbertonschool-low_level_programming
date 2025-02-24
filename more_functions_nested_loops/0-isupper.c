#include "main.h"
#include <unistd.h>

/**
 * _isupper - function the program need to execute
 * @c: the integrer the function work with
 *
 * Description:
 *
 * Return:
 */

int _isupper(int c)
{
	for (c = 65; c <= 90; c++)
	{
		if (c >= 65 && c <= 90)
			return (1);
		else
			return (0);	
	}
}
