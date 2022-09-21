#include<string.h>
/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer destination
 * @src: pointer source
 *
 * Return: pointer to the result of concatenates two strings
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

