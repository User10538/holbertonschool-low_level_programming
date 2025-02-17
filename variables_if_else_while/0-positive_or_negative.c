#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n); 
	if (n > 0) {
	printf("is positive");
	} else if (n < 0) {
    printf("is negative");
	} else {
    printf("is zero");
	}
	return (0);
}
