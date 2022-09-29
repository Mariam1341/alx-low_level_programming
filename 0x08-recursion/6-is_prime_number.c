#include"main.h"
/**
 * is_prime_number - check if the input integer is a prime number or not
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 0)
		n = n * -1;
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
int prime(int n, int num)
{
	if (n != num && n % num == 0)
		return (0);
	else if (num < n)
		return (prime(n, num + 1));
	else
		return (1);
}
