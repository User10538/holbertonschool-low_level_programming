#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the newly created array or null
 */


int *array_range(int min, int max)
{

	char *arr;
	unsigned int i, total_array;

	/** Check if either min or max is 0*/
	if (min == 0 || max == 0)
		return (NULL);

	if (min > max)
		return (NULL);

	/** Calculate the number of elements in the array*/
	total_array = max - min + 1;

	/** Allocate memory for the array of integers*/
	arr = malloc(total_array * sizeof(int));

	if (arr == NULL)
		return (NULL);

	/** Initialize the array with integers from min to max*/
	for (i = 0; i < total_array; i++)
	{
		arr[i] = min + 1;
	}

	return (arr);
}
