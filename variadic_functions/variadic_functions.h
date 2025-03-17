#ifndef VARIADIC_FUNCATIONS_H
#define VARIADIC_FUNCATIONS_H


/**
 * print_name - function that prints a name
 * @name: name to be printed.
 * @f: function pointer.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *));

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: unsigned int
 *
 * Return: returns 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - print numbers follows by new line
 *
 * @separator: to separate
 * @n: unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - function that prints string
 * @separator: character
 * @n: integer
 */
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCATIONS_H */


