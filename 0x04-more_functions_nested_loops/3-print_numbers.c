#include "main.h"
/**
* print_numbers -   prints the numbers, from 0 to 9
*
*Return : void
*/
void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}
