#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, size_b, size_s, k, sum, plus;
	
	for (i = 0; n1[i] != '\0'; i++);
	for (j = 0; n2[j] != '\0'; j++);
	if (i > j)
	{
		size_b = i;
		size_s = j;
	}
	else
	{
		size_b = j;
		size_s = i;
	}
	for (k = 0; k < size_r; k++)
	{
		if (n1[k] == '\0' && n2[k] == '\0')
			break;
		sum = (int) n1[k] + (int) n2[k] - 2 * 48 + plus; 
		plus = 0;
		if (sum > 9)
		{
			plus = 1; 
			sum -= 10;
		}
		sum += 48;
//		printf("%i ", sum);
		r[size_r - k -1] = (char) sum;
	}
	if (n1[k] != '\0' || n2[k] != '\0')
		return (0);
	return (r);	
}
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
