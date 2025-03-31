#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *  struct list_s - to create structure list
 *  @str: character
 *  @len: length of the int
 *  @next: next node.
 *
 */
typedef struct list_s
{
	/*string pointer*/
	char *str;

	unsigned int len;
	struct list_s *next;  /* Pointer to the next node*/

} list_t;

/**
 * list_len - function that returns the number of elements in a linked list_t list
 * @h: const list_t.
 * Return: number of nodes
 */
size_t list_len(const list_t *h);

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

