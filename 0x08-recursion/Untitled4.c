#include<stdio.h>
int is_prime_number(int n)
{
	if (n < 0)
		n = n * -1;
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
int prime(int n, int num)
{
	if (n != num && n % num == 0)
		return (0);
	else if (num < n)
		return (prime(n, num + 1));
	else
		return (1);
}
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
