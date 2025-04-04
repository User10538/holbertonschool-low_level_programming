#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * create_file - function that creates a file.
 * @filename: constr char
 * @text_content: char
 * Return: actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content);

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: constr char
 * @letters: size_t
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* MAIN_H */
