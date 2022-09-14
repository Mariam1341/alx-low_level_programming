#include "main.h"
/**
 * _islower(int c) - Entry point
 *
 *description:checks for lowercase character
 *
 * Return: integer (Success)
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	return (0);
}
