/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
	if (s[i] == c)
		return (s + i);
	i++;
}

return ('\0');
}
