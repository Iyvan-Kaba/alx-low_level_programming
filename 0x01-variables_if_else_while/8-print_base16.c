#include<stdio.h>
/**
 * main -> prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: always 0 on success
 */
int main(void)
{
	int ch;
	char n;
	/** we utilise ASCII code interprated characters when using putchar*/
	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	}
	for (n = 'a'; ch <= 'f'; n++)
	{
	putchar(n);
	}
	/**10 is the ASCII code for printing new line*/
	putchar(10);
return (0);
}

