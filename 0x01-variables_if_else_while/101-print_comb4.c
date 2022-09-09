#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int num = 10;
	int n1,n2,n3;
	while(num < 1000){
		
		n1 = num %10;
		n2 = num /10;
		n3 = num /100;
		if(n3 < n2 && n3 < n1){	
			if(n2 < n1){
				putchar(n3%10+'0');
				putchar(n2%10+'0');
				putchar(n1%10+'0');
				putchar(',');
				putchar(' ');
			}					
		}
		num++;
	}
	putchar('\n');
	return (0);
}
