#include "main.h"

/**
 * main - entry point
 * return - always 0 success
 *Decription: print_alphate prints alphabet in
 *lowercase followed by a new line
 *and only use _putchar twice in the code
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

