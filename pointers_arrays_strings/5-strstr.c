#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the main string to be searched.
 * @needle: the substring to locate.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	if (*needle == '\0')

		return (haystack);

	while (haystack[i] != '\0')

	{
		/**current character in haystack matches first character of needle*/

		if (haystack[i] == needle[0])

		{
			j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				break;
				j++;
			}

			if (needle[j] == '\0')
			return (&haystack[i]);
		}
		i++;
	}

	return (NULL);
}

