#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: NULL or pointer to the duplicated string
 */

char *_strdup(char *str)
{

	char *arr;
	unsigned int i;

	if (str == NULL || size == 0)
	return(NULL);

	arr = malloc(size);

	if (arr == NULL)
	return (NULL);

	for (i = 0; size > i; i++)
	arr[i] = c;

	return (arr);
}
