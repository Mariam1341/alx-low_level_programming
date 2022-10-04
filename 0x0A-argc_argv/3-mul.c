#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;
int res = argv[1] * argv[2];
printf("%d\n", res);
return (0);
}
