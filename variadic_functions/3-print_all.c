#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @char: const char
 * @format: const
 */

void print_all(const char * const format, ...)
{

	int i = 0;
	char *str;
	va_list ap;

	va_start(ap, format);

	/* Loop through the format string */
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%d", va_arg(ap, int));
		}

		if(format[i] == 'i')
                {
			printf("%d", va_arg(ap, int));	
		}
		
		if (format[i] == 'f')
                {
			printf("%f", va_arg(ap, double));
                }
		
		if (format[i] == 's')
                {
			str = va_arg(ap, char *);                        

			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
                }

		i++;
	}

	printf("\n"); /* Print a newline at the end */
        va_end(ap);

}
