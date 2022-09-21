/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @a : pointer to the array
 *
 * Return : pointer to the result of concatenates two strings
*/
char *string_toupper(char *a)
{
	int i = 0, num;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
