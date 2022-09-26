/**
 * *_strchr - locates a character in a string
 * @s : pointer to the string
 * @c : the character to check the condition
 * Return: pointer to the first occurrence of the character
**/
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;
	char *d;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	if (s[i] == '\0')
		return (NULL);

	while (s[i] != '\0')
	{
		d[j] = s[i];
		i++;
		j++;
	}

	return (d);
}
