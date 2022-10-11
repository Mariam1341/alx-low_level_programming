#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char **strtow(char *str)
{
int i = 0, j = 0 , k = 0;
char **strs;
if (str == NULL || str == "")
	return (NULL);
for (; str[i] != '\0'; i++)
{
	if (str[i] != ' ')
	{
		for (; str[i] != ' '; i++)
		{
			strs[j][k] = str[i];
		}
		i++;
		j++;
		k = 0;
	}
}
}
/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
