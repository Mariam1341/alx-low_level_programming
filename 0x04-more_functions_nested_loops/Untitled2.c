#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i, j,size = 10;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
			putchar('#');
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
	return 0;
	
}
