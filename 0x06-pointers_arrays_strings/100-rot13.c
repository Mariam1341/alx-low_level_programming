/**
 **rot13 - encodes a string into 1337.
 *
 * @str : pointer to the string
 *
 * Return : pointer to the string after transformation
*/
char *rot13(char *s)
{
	int i, ii;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 54; ii++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			&& s[i] == input[ii])
			{
				s[i] = output[ii];
				break;
			}
		}
	}
	return (s);
}
