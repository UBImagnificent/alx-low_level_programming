#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;
	/* declare variable for storing values */

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		putchar('\n');
	}
	/**
	 * uses the for loop to print all letters of the alphabet
	 * starting from a to z
	 * alphabet = a initailizers the variable 'alphabet'
	 * alphabet <= z sets the range of values we want
	 * alphabet ++ ensures that no values is repeated
	 */
	return (0);
}
