#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	int i;
	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++);
	char *s = malloc(i);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	return (s);
}
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
