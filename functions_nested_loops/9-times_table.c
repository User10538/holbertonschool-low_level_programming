#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
    int row, col, prod;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            prod = row * col;

            if (col == 0)
                _putchar('0' + prod);  // First number (no comma)
            else
            {
                _putchar(',');
                _putchar(' ');
                if (prod < 10)
                    _putchar(' ');  // Extra space for single digits
                _putchar('0' + (prod / 10));  // Tens place
                if (prod >= 10)
                    _putchar('0' + (prod % 10));  // Ones place
            }
        }
        _putchar('\n');
    }
}

