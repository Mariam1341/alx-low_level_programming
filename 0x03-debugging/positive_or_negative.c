#include <stdio.h>
/**
 * positive_or_negative - Get a random number and print the number and
 *if it is positive, negative, or zero
 *@n : integer to check
 * Return: void (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
}
