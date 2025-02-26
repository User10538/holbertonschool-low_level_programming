#include "main.h"
#include <stdio.h>

char *cap_string(char *s)
{
	int i = 0, j = 0, capitalise = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z' && capitalise)
		{
		
			s[i]-= 32;
		}

		capitalise = 0;

		if (s[i] == separators[j])
		{
			capitalise = 1;

		}
	}

	return (s);
}
