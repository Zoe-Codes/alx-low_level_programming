#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print if the number is negative, zero, or positive
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
{
printf("%i is negative\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
return (0);
}
