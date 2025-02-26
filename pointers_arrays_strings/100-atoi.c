#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int signs = 1, new_int = 0;

	while (*s && ( *s == ' ' || *s == '+' || *s == '-'))
	{
		if (*s == '-')
		{
			/**printf("%c", *s);*/
			signs = -signs ;
			s++;
		}
	}

	while (*s >= '0' && *s <= '9')
	{
		new_int = new_int * 10 + (*s - '0');
		s++;
	}


	return (signs * new_int);

}
