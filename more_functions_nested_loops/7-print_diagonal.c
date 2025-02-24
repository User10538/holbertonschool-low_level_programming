#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 *
 * Description: If n is 0 or less, it only prints a newline.
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > i)
	{

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
