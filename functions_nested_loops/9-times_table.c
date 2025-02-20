#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0.
 *
 * Description: This function prints a multiplication table
 * for the number 9, formatted with appropriate spacing.
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            if (j == 0)
                _putchar('0' + product);
            else
            {
                _putchar(',');
                _putchar(' ');

                if (product < 10)
                    _putchar(' '); /* Add space for single digits */
                
                _putchar('0' + (product / 10));
                if (product >= 10)
                    _putchar('0' + (product % 10));
            }
        }
        _putchar('\n');
    }
}

