#include<stdio.h>
/**
 *main -> prints the alphabet in lowercase and then Upper case,
 *followed by a new line
 *Return: always o on success
 */
int main(void)
{
	int ch;

	for (ch = 97 ; ch <= 122 ; ch++)
	{
	putchar(ch);
	}

	for (ch = 65 ; ch <= 90 ; ch++)
	{
	putchar(ch);
	}

	putchar(10);
return (0);
}
