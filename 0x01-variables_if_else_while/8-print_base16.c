#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int num = 0;
	int n = 97;

	while (num < 10)
	{
		putchar(num % 10 + '0');
		num++;
	}

	while(num < 16)
	{
		putchar(n);
		n++;
		num++;
	}
	putchar('\n');
	return (0);
}
