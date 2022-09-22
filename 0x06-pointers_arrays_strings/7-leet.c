/**
 **leet - encodes a string into 1337.
 *
 * @str : pointer to the string
 *
 * Return : pointer to the string after transformation
*/
char *leet(char *str)
{
  int i = 0, j;
  char cap[] = "aeotl", sm[] = "AEOTL";
  char n[] = "43071";
s
  while (str[i] != '\0')
  {
    j = 0;
    while (cap[j] != '\0')
    {
      if (str[i] == cap[j] || str[i] == sm[j])
      {
        str[i] = n[j];
      }
      j++;
    }
    i++;
  }
  return (str);
}
