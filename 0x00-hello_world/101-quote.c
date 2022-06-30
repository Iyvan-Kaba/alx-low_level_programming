#include<stdio.h>
#include<unistd.h>
/**
 * main-> is a function to print exactly "and that place of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a newline, to the standard error.
 * Return: always 1 (success).
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
