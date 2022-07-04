#include<stdio.h>
/**
 * main -> prints all possible different combinations of two digits.
 * Return: always 0 on success
 */
int main(void)
{
	int ch;

	int x;

	for (ch = 48; ch <= 57; ch++)
	for (x = 49; x <= 57; x++)
		if (x > ch);
		{
		putchar(ch);
		putchar(x);
		if (ch != 56 || x != 57)
			{
			putchar(44);
			putchar(32);
			}
		}
return (0);
}
