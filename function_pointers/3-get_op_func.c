#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct function to
 * perform the operation asked by the user
 *
 * @s: character
 *
 * Return: returns a pointer to the function that
 * corresponds to the operator given as a parameter
 *
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

	while (ops[i].op != NULL)
	{
		/* Ensures s is a single char */
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);

		i++;

	}

	return (NULL);
}
