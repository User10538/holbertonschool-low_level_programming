#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (if error or non-positive number)
 */
int main(int argc, char *argv[])
{
	int num, sum = 0;

	for (int i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

