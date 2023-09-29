#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * using if else conditional statements
	 * i verify if the value assigned to n is
	 * greater than zero which implies that it is positive if true
	 *is zero
	 *if the above conditions are false the the value is negative
	 */

	if (n > 0)
	{
		printf("%i is positive", n);
	}
	else if (n == 0)
	{
		printf("%i is zero", n);
	}
	esle
	{
		printf("%i is negative" n);
	}
	return (0);
}

