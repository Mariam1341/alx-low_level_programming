#include <stdlib.h>
#include <time.h>

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
			printf("0");
		}else{
			printf("less than 6 and not 0");
		}
	}else{
		printf("is greater than 5");
	}
	return (0);
}
