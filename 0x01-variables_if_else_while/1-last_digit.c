#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */

int main(void)
{
	int n, res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	res = n % 10;
	printf("Last digit of %i", n);
	printf(" is %i and is ", res);
	if(res < 6){
		if(res == 0){
			printf("0 \n");
		}else{
			printf("less than 6 and not 0 \n");
		}
	}else{
		printf("is greater than 5 \n");
	}
	return (0);
}
