#include <stdlib.h>
/**
* *create_array - creates an array of chars,
* and initializes it with a specific char.
*
* @size : the size of the array
* @c : the specific char
*
* Return : 0 or the pointer
**/
char *create_array(unsigned int size, char c)
{
char *s = malloc(size);
if (size == 0 || s == 0)
	return (0);

while (size--)
	s[size] = c;

return (s);
}
