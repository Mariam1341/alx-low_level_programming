#include "main.h"
/**
 * _islower - checks for lowercase character
 *@c : character to check the case
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	return (0);
}
