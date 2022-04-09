#include <stdio.h>
/**
 * main - print id the number id negative, zero, or positive
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
