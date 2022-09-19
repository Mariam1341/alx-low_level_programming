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
	int len = strlen(str);
	int i = (len / 2);

	if (len % 2 == 1)
		i ++;

	while (i < len)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
