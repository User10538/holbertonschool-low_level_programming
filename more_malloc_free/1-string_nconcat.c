#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or on failure or contains the contents of s1 and s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, len1 = 0, len2 = 0;
        char *new_string;

	        /**if NULL is passed, treat it as an empty string*/

        if (s1 != NULL)
        while (s1[len1])
                len1++;

        if (s2 != NULL)
        while (s2[len2])
                len2++;


}
