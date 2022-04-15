#include "main.h"

/**
 * main - Print the largest of 3 integers
 * @a: First integer
 * @b: Seconf integer
 * @c: Third integer
 * Return: largest integer
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
