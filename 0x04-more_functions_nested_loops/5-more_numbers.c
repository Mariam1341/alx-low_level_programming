#include "main.h"

/**
 * more_numbers -   prints the numbers, from 0 to 14 
 *
 *Return : void
 */
 
void more_numbers(void)
{
	int i;
	char c, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('0' + n);
				c = n % 10;
			}			
			_putchar('0' + c);
		}_putchar('\n');
	}	
}
