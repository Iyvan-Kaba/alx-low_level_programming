#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
	putchar("\n");
return (0);
}
