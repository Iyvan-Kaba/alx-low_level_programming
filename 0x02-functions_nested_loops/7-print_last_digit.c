#include "main.h"
/**
 *	print_last_digit - prints the last digit of a number.
 *	@n: parameter
 *	Return: returns the value of (n % 10)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -0;
	return (n % 10);
}
