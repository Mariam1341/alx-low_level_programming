#include <stdlib.h>
int main(void)
{
	int num = 0;
	int n1,n2;
	while(num < 100){
		
		n1 = num %10;
		n2 = num /10;
		if(n1 <= n2){
			num++;
			continue;
		}
		putchar(n2%10+'0');
		putchar(num%10+'0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
