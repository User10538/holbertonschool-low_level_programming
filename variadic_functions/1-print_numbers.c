#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: unsigned int
 *
 * Return: returns 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i= 0; i < n ; i++)
	{
		printf("%d\n" ,va_arg(ap, int));/* Print the next number */
				if (separator != NULL && i < n - 1) /* Print separator except after last number */
            printf("%s", separator);
	
	}	

	printf("\n"); /* Print a newline at the end */
	va_end(ap);	

}
