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

  while (str[i] != '\0')
  {
    for (j = 0; j < 5; j ++)
    {
      if (str[i] == cap[j] || str[i] == sm[j])
      {
        str[i] = n[j];
        break;
      }
    }
    i++;
  }
  return (str);
}
