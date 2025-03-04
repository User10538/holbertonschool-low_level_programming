#include "main.h"
#include <stdio.h>


/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The main string.
 * @accept: The characters to search for.
 *
 * Return: byte in s match bytes in accept,
 * or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);/* Return pointer to match */
				j++;
			}
			i++;
		}
	}

	return (NULL);

}
