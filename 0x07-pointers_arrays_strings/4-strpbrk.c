/**
 * _strpbrk :  searches a string for any of a set of bytes
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: pointer to the byte in s that matches one of
 *the bytes in accept, or NULL if no such byte is found
**/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
