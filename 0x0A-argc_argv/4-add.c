#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int sum = 0;
int i = 1;

while (i < argc)
{
	if (s[i] < '0' || s[i] > '9')
	{
		printf("Error\n");
		return (1);		
	}
	sum += atoi(argv[i]);
}

printf("%i\n", sum);

return (0);
}
