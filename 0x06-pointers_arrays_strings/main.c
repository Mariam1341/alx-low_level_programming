#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
	int i = 0, num;
	
	while (a[i] != '\0')
	{
		num = (int) a[i];
		if (num > 97)
		{
			num -= 32;
			a[i] = (char) num;
		}
		i++;
	}
	return (a);
}
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
