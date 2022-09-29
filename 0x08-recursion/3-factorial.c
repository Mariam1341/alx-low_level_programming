/**
 * factorial - factorial of a given number.
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return n * factorial(n -1);
}
