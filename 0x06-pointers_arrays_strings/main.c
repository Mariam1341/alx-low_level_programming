#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *a)
{
	int i = 0, num,j, flag;
	char sep[] = ",\t;\n; .!?\"(){}";

	while (a[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (a[i] == sep[j])
			{
				if (a[i] == '\t')
					a[i] = ' ';
				i++;
				num = (int) a[i];
				if (num >= 97 && num <= 122)
				{
					num -= 32;
					a[i] = (char) num;
				}
				else 
					i--;
				break;
			}
			j++;
		}
		i++;
	}
	return (a);
}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;
    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
