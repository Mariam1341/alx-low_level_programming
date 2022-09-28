/**
 * _puts_recursion : prints a string, followed by a new line
 *
 * @s: string to be printed.
 *
 * Return: Nothing
**/
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
