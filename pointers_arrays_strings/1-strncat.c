#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncat - Concatenates two strings using at most `n` bytes from `src`

 * @dest -destination string which src will be apprended
 * @src - source to append to 'dest'
 * @n - max number from src
 *
 * return - pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/**printf("%c" , *dest);*/
	/**printf("%c" , *src);*/

	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;

	}	

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);




}
