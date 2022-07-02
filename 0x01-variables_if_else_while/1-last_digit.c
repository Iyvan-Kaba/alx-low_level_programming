#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*	main-> assign a random number to variable n
*	each time it is executed and print the last digit of
*	the number stored in variable n either equal to 0,less than 6 and not 0
*	or more than 5
*
*	Return: always 0 on success
*/
int main(void)
{
int n, x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x=n % 10;
printf("Last digit of %d is ", n);
	if (n > 5)
		{
		printf("%d and is greater than 5", x);
		}
	if (n == 0)
		{
		printf("%d and is 0", x);
		}
	if (n < 6 && n != 0)
		{
		printf("%d and is less than 6 and not 0", x);
		}
	printf("\n");
	return (0);
}
