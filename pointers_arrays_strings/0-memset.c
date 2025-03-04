#include "main.h"
#include <stdio.h>
/**
 * Description - fills memory with a constant byte.
 *
 * _memset - fills memory with a constant byte
 *
 * @s:array
 * @n: is an int
 * @b: is a char
 * Return: pointer to memory area s
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
