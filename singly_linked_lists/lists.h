#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: const lsit_t.
 * Return: number of nodes
 */
size_t print_list(const list_t *h);

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* LISTS_H */

