/**
 * cap_string - capitalizes all words of a string.
 *
 * @a : pointer to the string
 *
 * Return : pointer to the string after transformation
*/
char *cap_string(char *a)
{
	int i = 0, num;
	
	while (a[i] != '\0')
	{
		if (a[i] == ' ')
		{
			num = (int) a[i];
			if (num >= 97)
			{
				num -= 32;
				a[i] = (char) num;
			}
		}
	}
	return (a);
}
