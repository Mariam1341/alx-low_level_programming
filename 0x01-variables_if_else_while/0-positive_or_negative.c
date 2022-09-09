#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Get a random number and print the number'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0){
		printf("%i is positive", n);
	}else if(n < 0){
		printf("%i is negative", n);
	}else{
		printf("%i is zero", n);
	}
	printf("\n");
	return (0);
}
