#include "main.h"

int print_last_digit(int n)
{
	int find_last_digit = n % 10;
	if (find_last_digit < 0)
		find_last_digit = -find_last_digit;
       	_putchar(find_last_digit + '0');
	return find_last_digit;
}
