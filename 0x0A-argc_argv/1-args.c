#include <stdio.h>
/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unsaved)))
{
	printf("%d\n", argc - 1);
	return (0);
}
