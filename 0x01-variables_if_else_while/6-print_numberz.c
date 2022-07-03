#include<stdio.h>
/**
 * main -> prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: always 0 on success
 */
int main(void)
{
	int ch;
	/** we utilise ASCII code interprated characters when using putchar*/
	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	}
/**10 is the ASCII code for printing new line*/
putchar(10);
return (0);
}
