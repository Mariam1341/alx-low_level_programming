/**
 * _strcmp - compares two strings.
 *
 * @s1 : pointer to 1st string
 * @s2 : pointer to 2nd string
 *
 * Return: -15 or 15 or 0
 */
int _strcmp(char *s1, char *s2)
{
  int i = 0;

  while (s1[i] != '\0' || s2[i] != '\0')
  {
    if (s1[i] != s2[i])
    {
      if (s1[i] > s2[i])
        return (15);
      else
        return (-15);
    }
    else
      i++;
  }
  return (0);
}
