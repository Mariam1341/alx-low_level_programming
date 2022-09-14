#include "main.h"
/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int res, i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
					_putchar('0' + res);
				else if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				}
				else if (res < 100)
				{
					_putchar(' ');
					_putchar('0' + res / 10);
					_putchar('0' + res % 10);
				}
				else
				{
					_putchar('0' + res / 100);
					_putchar('0' + (res - 100) / 10);
					_putchar('0' + res % 10);
				}

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
