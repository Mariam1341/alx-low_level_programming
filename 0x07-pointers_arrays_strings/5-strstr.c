/**
 * _strpbrk : locates a substring.
 * @haystack: string to be scanned.
 * @needle: string containing the characters to match.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
**/
char *_strstr(char *haystack, char *needle)
{
int index, flag = 1;

while (*haystack)
{
	if (haystack[0] == needle[0])
	{
		for (index = 1; needle[index] != '\0'; index++)
		{
			if (haystack[index] != needle[index])
			{
				flag = 0;
				break;
			}
			flag = 1;
		}
		if (flag)
			return (haystack);
	}
	haystack++;
}
return ('\0');
}
