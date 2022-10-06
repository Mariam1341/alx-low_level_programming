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
char *str_concat(char *s1, char *s2)
{
	int i = 1, j = 1, sum, k;
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++);
	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++);
	
//	sum = i + j;
	char *s = malloc(i +j);
	if (i == 1)	
		s[0] = ' ';
	else 
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
	if (j == 1)	
		s[i + 1] = ' ';
	else 
		for (k = 0; s2[k] != '\0'; k++)
			s[i + k] = s2[k];
	return (s);
}
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
