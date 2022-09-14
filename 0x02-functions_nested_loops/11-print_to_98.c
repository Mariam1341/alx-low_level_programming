#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 *@n : inial integer
 *
 * Return: void 
 */
void print_to_98(int n)
{
	int i = n, check = 0;

	if (i > 98){
		check = 1;
	}

	while( i != 98){
		printf("%i, ", i);
		if (check == 1)
			i--;
		else
			i++;	
	}
	printf("%i", 98);
	
}
