#include <stdio.h>

int main(void)
{
printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(char));
printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(int));
printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", 
(unsigned int)sizeof(long long int));
printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(float));

return (0);
}
