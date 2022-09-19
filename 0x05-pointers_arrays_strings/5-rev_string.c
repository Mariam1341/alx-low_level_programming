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
	int len = strlen(s);
	int i = len - 1;
	int j = 0;

	while (i != j)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
