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
	int i = 0;
	int len = strlen(src);

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
