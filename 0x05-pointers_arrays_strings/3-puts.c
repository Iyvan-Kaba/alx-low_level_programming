#include "main.h"
/*
 *_puts -> this is a function that prints a character
 *@str: a parameter to puts
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
