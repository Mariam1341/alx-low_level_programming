#include <string.h>
#include <stdio.h>
/**
* puts_half - prints half of a string, followed by a new line
*
*@str : pointer
*
*Return : void
*/
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 1)
		i = len / 2;
	else
		i =  len / 2;
			
	while (i < len)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
