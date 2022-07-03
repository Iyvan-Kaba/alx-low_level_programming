#include<stdio.h>
/**
*main -> prints the alphabet in lowercase, followed by a new line
*Return: always o on success
*/
int main(void)
{
	int ch;

	for (ch = 97 ; ch <= 122 ; ch++)
	{
	putchar(ch);
	}
	putchar(10);
return (0);
}
