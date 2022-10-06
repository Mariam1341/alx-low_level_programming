#include <stdlib.h>
/**
* *str_concat - concatenates two strings.
*
* @s1 : 1st string
* @s2 : 2nd string
*
* Return: pointer to a newly allocated space in memory or NULL
**/
char *str_concat(char *s1, char *s2)
{
	int i = 1, j = 1, k;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
		;

	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc((i + j) * sizeof(*s1) + 1);
	if (s == 0)
		return (NULL);
	if (i != 1)
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
	else
		i = 0;
	if (j != 1)
		for (k = 0; s2[k] != '\0'; k++)
			s[i + k] = s2[k];
	return (s);
}
