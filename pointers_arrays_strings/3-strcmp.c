#include "main.h"
#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] == s1[i])
	{
		i++;
	}

	return (s2[i]);
}
