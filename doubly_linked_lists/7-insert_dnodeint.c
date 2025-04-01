#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position.
 * @h: const dlistint_t
 * @idx: int
 * @n: int
 * Return: address of new nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;
	
	if (h == NULL)
		return (NULL);
	
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);




}
