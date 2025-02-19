#include "main.h"

/**
 * main - entry point
 * return - always 0 success
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */



void print_alphabet(void)
{
	char ch;
    	for (ch = 'a'; ch <= 'z'; ch++)
    	{
		_putchar(ch);
    	}
    	_putchar('\n');
}

