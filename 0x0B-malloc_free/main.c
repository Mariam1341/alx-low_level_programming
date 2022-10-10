#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (*av[i] != '\0')
	{
		s[i] = av[i] + "\n";
	}
	return s;
	
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
