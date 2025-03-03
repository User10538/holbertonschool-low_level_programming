#include "main.h"
#include <stdio.h>
/**
 * _memset() function fills the first n bytes
 *  of the memory area pointed to by s
 *   with the constant byte b
 *   @s:array
 *   @n: is an int
 *   @b: is a char
 *   Return: pointer to memory area s
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
