#include <stdlib.h>
/**
* *_strdup - contains a copy of the string
* given as a parameter.
*
* @str : the string to copy
*
* Return: pointer to a newly allocated space in memory or NULL
**/
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
