#include<stdio.h>
#include <string.h>

/**
* print_rev -  prints a string, in reverse, followed by a new line
*
*@s : pointer
*
*Return : void
*/
void print_rev(char *s)
{
	int len = strlen(s);
	int i = len - 1;

	while (s[i])
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
