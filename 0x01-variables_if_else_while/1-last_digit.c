#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*	main: assign a random number to variable n
*	each time it is executed and print the last digit of
*	the number stored in variable n.
*
*	Return: always 0 on success
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ");
	if (n > 5)
		{
		printf("%d and is greater than 5", n);
		}
	if (n == 0)
		{
		printf("%d and is 0", n);
		}
	if (n < 6 && n != 0)
		{
		printf("%d and is less than 6 not 0", n);
		}
	printf("\n");
	return (0);
}
