/**
 * _strspn : gets the length of a prefix substring
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: the number of characters in the initial 
 *segment of str1 which consist only of characters from str2.
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;
	
	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
