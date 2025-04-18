#include "main.h"

/**
 * _strlen_recursion - Prints returns the length of a string.
 * @s: The length of the string
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (1 + _strlen_recursion(s + 1));
}
