#include "main.h"
/**
 * jack_bauer(void) - Entry point
 *
 *Description:prints every minute of the day, starting from 00:00 to 23:59.
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{

int h1;
int h2;
int m1;
int m2;
int a = 9;

h2 = 0;
while (h2 <= 2)
{
	if (h2 == 2)
	{
		/*Restrain to 23h, not 29*/
		a = 3;
	}
	h1 = 0;
	while (h1 <= a)
	{
		m2 = 0;
		while (m2 <= 5)
		{
			m1 = 0;
			while (m1 <= 9)
			{
				_putchar('0' + h2);
				_putchar('0' + h1);
				_putchar(':');
				_putchar('0' + m2);
				_putchar('0' + m1);
				_putchar('\n');
				m1++;
			}
			m2++;
		}
		h1++;
	}
	h2++;
}

}
