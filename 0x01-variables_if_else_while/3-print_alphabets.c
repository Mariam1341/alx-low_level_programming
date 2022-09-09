#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int num = 97;
	while(num <= 122){
		putchar(num);
		num++;
	}
	num = 65;
	while(num <= 90){
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
