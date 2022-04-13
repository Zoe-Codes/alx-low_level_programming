#include "main.h"
#include <stdio.h>

/**
 * main - Print all natural numbers from n to 98
 * @n: Start counting from n to 98
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}

else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}