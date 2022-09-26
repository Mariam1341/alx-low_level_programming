#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j, pos, flag = 0;
    for (i = 0; s[i] != '\0';i++);
    pos = i;
    for (i = 0; accept[i] != '\0';i++)
    {
        for (j = 0; s[j] != '\0';j++)
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
    {
        return &s[pos];
    }
    else
    {
        return NULL;
    }
}
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
