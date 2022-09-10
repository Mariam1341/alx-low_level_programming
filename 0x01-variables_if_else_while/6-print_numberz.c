#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num % 10 + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
