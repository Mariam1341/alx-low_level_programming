#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 *@n : inial integer
 *
 * Return: void 
 */
void print_to_98(int n)
{
	int i = n, check = 0;

	if (i > 98){
		check = 1;
	}

	while( i != 98){
		if (i == 0)
		{
			_putchar('0' + i);
		}
		else if (i < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + i);
		}
		else if (i < 100)
		{
			_putchar(' ');
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		else
		{
			_putchar('0' + i / 100);
			_putchar('0' + (i - 100) / 10);
			_putchar('0' + i % 10);
		}

		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (check == 1)
			i--;
		else
			i++;	
	}
	_putchar(' ');
	_putchar('0' + 98 / 10);
	_putchar('0' + 98 % 10);
	
}
