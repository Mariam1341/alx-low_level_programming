#include <stdio.h>
#include <stdlib.h>
/**
 * main -  adds positive numbers followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;
int sum = 0, i = 1; 

if (argc == 1)
{
	printf("0\n");
	return (1);
}
while (i < argc)
{
	if (atoi(argv[i]) == 0 && argv[i] != "0")
	{
		printf("Error\n");
		return (1);
	}
	sum += argv[i];
}
printf("%i\n", sum);
return (0);
}
