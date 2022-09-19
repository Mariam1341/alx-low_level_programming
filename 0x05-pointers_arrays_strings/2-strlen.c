/**
* _strlen - returns the length of a string
*
*@s : pointer of character
*
*Return : integer
*/
int _strlen(char *s)
{		
	int i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
