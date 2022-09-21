#include "main.h"
/**
 * *_strncat - concatenates two strings
 *
 * @dest: pointer destination
 * @src: pointer source
 * @n: the number of characters from secound string
 *
 * Return: pointer to the result of concatenates two strings
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(src);

	if (i < n)
		return (_strcat(dest,src));
	else
	{
		int j;
		char arr[n+1];
		for (j = 0; j < n; j++)
			arr[j] = src[j];
		arr[j] = '\0';
		return (_strcat(dest,arr));
	}	
}

