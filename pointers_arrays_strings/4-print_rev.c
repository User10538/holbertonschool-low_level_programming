#include "main.h"
#include <stddef.h>

void print_rev(char *s)
{
	if (s != NULL)
	{
		while (s != NULL && *s != '\0')
		{

			_putchar(*s);
		}



		_putchar('\n');
	}
}
