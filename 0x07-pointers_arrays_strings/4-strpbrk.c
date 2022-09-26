/**
 * _strpbrk :  searches a string for any of a set of bytes
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: pointer to the byte in s that matches one of
 *the bytes in accept, or NULL if no such byte is found
**/
char *_strpbrk(char *s, char *accept)
{
    int i, j, pos, flag = 0;
    for (i = 0; s[i] != '\0';i++);
    pos = i;
    for (i = 0; accept[i] != '\0'; i++)
    {
        for (j = 0; s[j] != '\0'; j++)
        {
            if (accept[i] == s[j])
            {
                if (j <= pos)
                {
                    pos = j;
                    flag = 1;
					break;
                }
            }
         }
    }
    if (flag == 1)
        return &s[pos];
    else
        return NULL;
}
