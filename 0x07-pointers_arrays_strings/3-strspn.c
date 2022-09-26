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
	unsigned int i = 0, check = 0, k, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (check);
		}
		i++;
	}
	return (check);
}
