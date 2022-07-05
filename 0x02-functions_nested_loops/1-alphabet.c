#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: always 0 on success
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
