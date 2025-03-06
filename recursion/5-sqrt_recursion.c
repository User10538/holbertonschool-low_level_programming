#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n : integer.
 *
 * Return: sqauare root of a number
 *
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);

	return (_sqrt_recursion_helper(n, 1));
}

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)  /** If i^2 exceeds n, no natural sqrt exists*/
		
		return (-1);
	
	if (i * i == n) /** Found the sqrt*/
		
		return (i);
	
	return (_sqrt_recursion_helper(n, i + 1)); /** Check next number*/


}
