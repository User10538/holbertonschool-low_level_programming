#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: const character
 * Return:the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{

	int intNumber = 0, i = 0, remainder;

	if (b != '1' || b != '0' || b == NULL)
		return (0);

	while ( b != 0)
	{
		remainder = intNumber % 10;
		b /= 10;
		intNumber += remainder * pow(2, i);
		++i;
	}

	return (intNumber);



}
