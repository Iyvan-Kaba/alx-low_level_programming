#include<stdio.h>
/**
 * main -> prints the lowercase alphabet in reverse, followed by a new line.
 * Return: always 0 on success
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
	putchar(ch);
	}
	putchar(10);
return (0);
}
