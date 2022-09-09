#include <stdlib.h>
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
