#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: long int
 */
void print_binary(unsigned long int n);

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: const character
 * Return:the converted number, or 0
 */
unsigned int binary_to_uint(const char *b);

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* MAIN_H */
