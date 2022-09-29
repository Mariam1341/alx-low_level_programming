#include<stdio.h>
int _strlen_recursion(char *s)
{
int i = 0;

if (*s == '\0')
{
	return i;
}
else
{
	i+=_strlen_recursion(s+1)+1;
}


}
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
