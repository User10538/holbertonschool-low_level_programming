#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments (unused)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int count;

	/**printf("This program was called with \"%s\".\n", argv[0]);*/

	if (argc > 1)

	{
		for (count = 1; count < argc; count++)

		{
			/**printf("argv[%d] = %s\n", count, argv[count]);*/
			printf("%s\n", argv[count]);
		}
	}

	else
	{
		printf("The command had no other arguments.\n");
	}

	return (0);
}
