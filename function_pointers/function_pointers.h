#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H


/**
 * print_name - function that prints a name
 * @name: name to be printed.
 * @f: function pointer.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *)); /** task 0*/

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* FUNCATION_POINTERS_H */

