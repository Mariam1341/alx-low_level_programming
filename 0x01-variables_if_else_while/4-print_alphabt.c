#include <stdlib.h>
int main(void)
{
	int num = 97;
	while(num <= 122){
		if(num == 101 || num == 113){
			num++;
		}
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
