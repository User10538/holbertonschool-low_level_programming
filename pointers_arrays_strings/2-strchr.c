#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locate char in string
 * @c: char to be located
 * @s:pointer to the string to be searched
 * @null
 *
 * Return: Pointer to the first occurrence of c, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')

		if (s[i] == c)
		{
			return (&s[i]);
			i++;
		}
	if (c == '\0')
	{
		return (&s[i]);
	}

	return (NULL);

}

