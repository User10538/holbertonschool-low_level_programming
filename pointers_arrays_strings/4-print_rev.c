#include "main.h"
#include <stddef.h>

#include "main.h"
#include <stddef.h>

void print_rev(char *s)
{
    if (s != NULL)
    {
        while (*s != '\0')
        {
            s++;
        }

        while (s != NULL && *s != '\0')
        {
            s--;
            _putchar(*s);
        }

        _putchar('\n');
    }
}

