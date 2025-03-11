#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array of nmemb
 *
 * @nmemb: unsigned integer
 * @size: unsigned integer
 *
 *
 * Return: NULL or a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);


	/* Allocate memory for nmemb elements, each of size bytes */
	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	/* Initialize allocated memory to zero */
	/** calloc allocates memory and also initializes it to zero*/
	memset(arr, 0, nmemb * size);

	return (arr);


}
