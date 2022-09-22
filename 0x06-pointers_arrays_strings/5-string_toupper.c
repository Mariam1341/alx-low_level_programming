/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @a : pointer to the string
 *
 * Return : pointer to the string after transformation
*/
char *string_toupper(char *a)
{
	int i = 0, num;

	while (a[i] != '\0')
	{
		num = (int) a[i];
		if (num >= 97 && num <= 122)
		{
			num -= 32;
			a[i] = (char) num;
		}
		i++;
	}
	return (a);
}
