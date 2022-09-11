#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0s
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((i == k && j < l) || (i < k))
					{
					if (i != k || j != l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == '9' && j == '8' && k == '9' && l == '9')
							break;
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
