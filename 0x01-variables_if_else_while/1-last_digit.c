#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * the code above was provided by Alx
	 * though I added the stdio.h header file
	 * stdio.h allows ensures that printf functions as intended
	 * beneath I will add the control statement to optimise the code
	 * the program will now print the last digit of a radom number
	 * as well as a little description of that digit
	 * this is gotten through the if else statements
	 */

	int b = n % 10;
	/* finds the last figit and stores it in a variable */

	if (b > 5)
	{
		printf("Last digit of %i is %i ", n, b);
		printf("and is greater than 5\n");
	}
	/* evaluates the last digit and prints description of it */

	else if (b == 0)
	{
		printf("Last digit of %i is %i ", n, b);
		printf("and is 0\n");
	}
	/* evaluation and description of last digit */

	else
	{
		printf("Last digit of %i is %i ", n, b);
		printf("and is less than 6 and is not 0\n");
	}

	return (0);
}
