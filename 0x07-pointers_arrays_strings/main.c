#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
 
 char *_strchr(char *s, char c)
{
	int i = 0, j = 0;
	char *d;
	
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;	
	}
	if (s[i] == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		d[j] = s[i];
		i++;
		j++;
	}
	return (d);
}
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
