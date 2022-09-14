#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description:prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i, a = 0, b = 1, next;

	for (i = 0; i < 1024; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (i < 49)
			printf(", ");
	}
		
	printf("\n");
	return (0);
}
