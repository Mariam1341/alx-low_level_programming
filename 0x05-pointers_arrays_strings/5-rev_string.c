#include <string.h>
/**
* rev_string -   reverses a string
*
*@s : pointer
*
*Return : void
*/
void rev_string(char *s)
{
	int i = strlen(s) - 1;
	int j = 0;
	char temp;

	while (i != j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
