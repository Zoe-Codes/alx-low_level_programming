#include "main.h"

/**
 * main - Return the largest of three numbers.
 * @a: First int
 * @b: Second int
 * @c: Third int
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
int largest = b;

if (a > b)
{
largest = a;
}
else if (c > b)
{
largest = c;
}
return (largest);
}
