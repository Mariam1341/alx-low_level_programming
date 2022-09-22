#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i = 0, j;
	char cap[] = "aeotl", sm[] = "AEOTL";
	char n[] = "43071";
	
	while (str[i] != '\0')
	{
		j = 0;
		while (cap[j] != '\0')
		{
			if (str[i] == cap[j] || str[i] == sm[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
