#include <stdlib.h>
int main(void)
{
	int num = 0;
	while(num < 10){
		putchar(num%10+'0');
		if(num == 9){
			break;
		}
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
