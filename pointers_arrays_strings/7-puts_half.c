#include "main.h"
#include <stdio.h>


void puts_half(char *str)
{
	/** find the len of the string*/

	char *ptr = str;
	int len = 0;
	char *start;

	while (*ptr)
	{
		ptr++;
		len++;
	}

	if (len % 2 == 1)/**modulus operator (%) divides one number by another and returns the remainder of that division.*/
	{
		len = (len +1) /2;
	}
	else
	{
		len = len/2;
	}

	start = str + len; /**point to the start pf the 2nd part*/

	while (*start)
	{
		_putchar(*start);
		start++;
	}



	_putchar('\n');


}
