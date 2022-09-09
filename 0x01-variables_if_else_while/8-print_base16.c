#include <stdlib.h>
int main(void)
{
	int num = 0;
	while(num < 10){
		putchar(num%10+'0');
		num++;
	}
	int n = 97;
	while(num < 16){
		putchar(n);
		n++;
		num++;
	}
	putchar('\n');
	return (0);
}
