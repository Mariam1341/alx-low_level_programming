#include "main.h"
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
 char *_strcat(char *dest, char *src)
{
	int a = 0, i = 0;

	while (dest[i] != '\0')
		i++;

	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
