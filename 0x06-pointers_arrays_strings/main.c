#include "main.h"
#include <stdio.h>
#include<string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

char *_strcat(char *dest, char *src)
{
	int a = 0, i = 0;

	while (dest[i] != '\0')
		i++;

	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest);
}

void print(char *arr, int n){
	int j;
	for (j = 0; j < n; j++)
		printf(arr[j]);
}
char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(src);

	if (i < n)
		return (_strcat(dest,src));
	else
	{
		int j;
		char arr[n+1];
		for (j = 0; j < n; j++)
			arr[j] = src[j];
		arr[j] = '\0';
		return (_strcat(dest,arr));
	}	
}


int main(void)
{
     char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
