#include "main.h"
/**
 * main - Print the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}
