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

if (argc == 1)
{
	printf("0\n");
	return (0);	
}
while (i < argc)
{
	if (argv[i] < '0' || argv[i] > '9')
	{
		printf("Error\n");
		return (0);		
	}
	sum += atoi(argv[i]);
}

printf("%i\n", sum);

return (0);
}
