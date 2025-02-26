#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int signs = 1, new_int = 0;

	if (*s == '-')
	{
		/**printf("%c", *s);*/
		signs = -signs ;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
        if (new_int > (INT_MAX / 10) || (new_int == (INT_MAX / 10) && (*s - '0') > (INT_MAX % 10)))
        {
            /* Handle overflow */
            return (signs == 1) ? INT_MAX : INT_MIN;
        }
        new_int = new_int * 10 + (*s - '0');
        s++;
    }

	return (signs * new_int);

}
