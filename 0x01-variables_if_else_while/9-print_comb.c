#include<stdio.h>
/**
 *main -> prints all possible combinations of single-digit numbers.
 *Return: always 0 on success
 */
int main(void)
{
	int ch;
	/** we utilise ASCII code interprated characters when using putchar*/
	for (ch = 48; ch <= 57; ch++)
		{
		putchar(ch);
		}

	if (ch != 57)
		{
		putchar(44);
		putchar(32);
		}
	/**10 is the ASCII code for printing new line*/
	putchar(10);
return (0);
}
