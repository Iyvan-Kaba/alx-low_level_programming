#include "main.h"
/**
 *	print_sign - prints the sign of a number
 *	@n: character of an argument
 *	Return: always returns 0, 1 or -1 considering the condition.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

		else if (n == 0)
		{
		_putchar ('0');
		return (0);
		}

	else
	{
	_putchar ('-');
	return (-1);
	}
}
