#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Select the corresponding operator function
 * @s: The operator in a string
 *
 * Return: return a pointer to the corresponding operator
 * function. Or NULL if the operator isn't valid
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		else
			i++;
	return (NULL);
}
