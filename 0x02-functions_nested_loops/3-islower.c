#include "main.h"
/**
 * _islower - Entry point
 *
 *description:checks for lowercase character,if lower return 1 otherwise 0
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return 1;	
	return 0;
}
