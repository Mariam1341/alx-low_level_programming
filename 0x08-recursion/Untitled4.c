void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		putchar('\n');
		return (0);
	}
	putchar(s[0]);
	s++;
	_puts_recursion(s);
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
