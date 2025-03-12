#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: struct dog
 *
 */

void print_dog(struct dog *d)
{

	char s[] = "(nil)";

	if (d == NULL || d->name == NULL)
	{
		printf("%s\n", s);
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : s);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
