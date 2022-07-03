#include<stdio.h>
/**
*main -> prints the alphabet in lowercase and then Upper case,
*followed by a new line
*Return: always 0 on success
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
	}
putchar(10);
return (0);

}

