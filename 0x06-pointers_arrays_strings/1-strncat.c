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
	int a = 0, i = 0;

	while (dest[i] != '\0')
		i++;

	while (src[a] != '\0' && a < n)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i + 1] = '\0';
	return (dest);	
}

