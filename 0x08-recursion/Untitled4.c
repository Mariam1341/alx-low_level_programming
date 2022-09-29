void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
	_print_rev_recursion(s + 1);
	putchar(*s);
}}
int main(void)
{
    _print_rev_recursion("Puts with recursion");
    return (0);
}
