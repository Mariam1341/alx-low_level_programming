#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string
 * @s: pointer to the string
 * Return: the length of the string
 */
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
