#include <stdio.h>
/**
*print_array - prints n elements of an array of integers,
* followed by a new line.
*
*@a : pointer to array
*@n : pointer to length of the array
*
*Return : void
*/
void print_array(int *a, int n)
{
	int i = 0;
	int *p = arr;

	while (i < n)
	{
		printf("%d", a[i]);
		if (n > 0)
			putchar(', ');
		i++;
	}
	putchar('\n');
}
