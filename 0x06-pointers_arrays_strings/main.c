#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 void reverse_array(int *a, int n) //0 1 2 3 4 5 6 7 8 9
{
	int i = 0, j = n - 1, temp, half = n / 2;

	while (i != j && i < half)
	{
		temp = a[i]; // 0 1 2 3 4
		a[i] = a[j]; // 9 8 7 6 5
		a[j] = temp; // 
		i++; // 1 2 3 4 5 
		j--; // 8 7 6 5 4
	}
}
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
