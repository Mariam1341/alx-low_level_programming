/**
 * cap_string - capitalizes all words of a string.
 *
 * @a : pointer to the string
 *
 * Return : char
*/
char *cap_string(char *a)
{
int i = 0, num, j;
char sep[] = ",\t;\n; .!?\"(){}";

num = (int) a[0];
if (num >= 97 && num <= 122)
{
  num -= 32;
  a[0] = (char) num;
}
i++;
while (a[i] != '\0')
{
j = 0;
while (sep[j] != '\0')
{
  if (a[i] == sep[j])
  {
    if (a[i] == '\t')
      a[i] = ' ';
    i++;
    num = (int) a[i];
    if (num >= 97 && num <= 122)
    {
      num -= 32;
      a[i] = (char) num;
    }
    else
      i--;
    break;
  }
  j++;
}
i++;
}
return (a);
}
