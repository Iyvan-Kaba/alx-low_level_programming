#include "main.h"
/**
 *jack_bauer - prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int n, x;

	for (n = 0; n < 24; n++)
		{
		for (x = 0; x < 60; x++)
			{
			if (n < 10)
			{
			_putchar('0');
			_putchar(n + '0');
			}
				else if (n >= 10)
				{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				}
		if (x < 10)
		{
		_putchar(':');
		_putchar('0');
		_putchar(x + '0');
		}
			else if (x >= 10)
			{
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			}
			_putchar('\n');
			}
		}
}

