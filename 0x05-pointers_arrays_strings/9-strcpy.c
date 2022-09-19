#include <stdio.h>
#include <string.h>
/**
*_strcpy -  copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
*
*@dest : pointer to array
*@src : pointer to string to copy
*
*Return : Pointer to `dest`
*/
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
