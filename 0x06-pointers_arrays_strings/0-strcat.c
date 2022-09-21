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
  int len1 = strlen(dest);
  int len2 = strlen(src);
  int i;

  for (i = 0; i < len; i++)
  {
    dest[len1 - i] = src[i];
  }
  return (dest);
}
