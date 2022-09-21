#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
char *_strcat(char *dest, char *src)
{
	int len2 = strlen(src);
	int len1 = 0, i =0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	len1++;

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
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
