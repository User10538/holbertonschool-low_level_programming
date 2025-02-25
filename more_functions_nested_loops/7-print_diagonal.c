#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (int i = 0; i < n; i++)  // Loop for each line
    {
        for (int j = 0; j < i; j++)  // Print correct number of spaces
        {
            _putchar(' ');
        }

        _putchar('\\');  // Print the diagonal character
        _putchar('\n');  // Newline after each '\'
    }
}

