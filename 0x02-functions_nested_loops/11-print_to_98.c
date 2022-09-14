#include "main.h"
/**
 * print_to_98(int n) - Entry point
 *
 *description: prints all natural numbers from n to 98
 *
 * Return: void 
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
			if (i == 0)
			{
				_putchar('0' + res);
			}
			else if (i < 10)
			{
				_putchar(' ');
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}

			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
	}
}
