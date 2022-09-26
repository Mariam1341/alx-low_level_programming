#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strstr(char *haystack, char *needle)
{
	int index, flag = 1;

	while (*haystack)
	{
		if (haystack[0] == needle[0])
		{
			for (index = 1; needle[index] != '\0'; index++)
			{
				if (haystack[index] != needle[index])
				{
					flag = 0;
					break;	
				}
				flag = 1;
			}
			if (flag)
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
