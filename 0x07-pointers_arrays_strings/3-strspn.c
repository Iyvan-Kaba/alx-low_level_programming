#include "main.h"
/**
 * _strspn -> this is length set function
 * @s: string
 * @accept: a character
 * Return: a string
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
