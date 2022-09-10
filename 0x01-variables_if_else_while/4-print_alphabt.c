#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		if (num == 101 || num == 113)
			num++;
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
