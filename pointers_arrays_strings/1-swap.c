#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string manually
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')  // Iterate through the string
        len++;

    return len;
}

