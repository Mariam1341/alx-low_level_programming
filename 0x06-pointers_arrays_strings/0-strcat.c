#include<string.h>
/**
* _strcat - concatenates two strings
*
*@dest : pointer of 1st string
*@src : pointer of 2nd string
*
*Return : string after concatenate
*/
char *_strcat(char *dest, char *src)
{
	int len2 = strlen(src);
	int len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	len1++;

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
