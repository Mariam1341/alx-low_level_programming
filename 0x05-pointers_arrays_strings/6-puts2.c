#include <string.h>
#include <stdio.h>
/**
* puts2 -  prints every other character of a string,
*starting with the first character, followed by a new line
*
*@str : pointer
*
*Return : void
*/
void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
