/**
 * _strncpy - copies a string.
 *
 * @dest: pointer destination
 * @src: pointer source
 * @n: the number of characters from secound string
 *
 * Return: pointer to the result of concatenates two strings
*/
 char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
