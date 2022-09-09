#include <stdlib.h>
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
