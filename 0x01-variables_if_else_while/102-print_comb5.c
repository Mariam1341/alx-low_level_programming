#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
int i, j, k, l;


while (i < 10)
{
	j = 0;
	while (j < 10)
	{
		k = 0;
		while (k < 10)
		{
			l = 0;
			while (l < 10)
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
					
						if (i == '9' && j == '8' && k == '9' && l =='9')
							break;	
						putchar(',');
						putchar(' ');	
					}
				}
				l++;
			}
			k++;
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
