#include "main.h"
/**
 * _isalpha(int c) - Entry point
 *
 *description: checks for alphabetic character
 *
 * Return: integer (Success)
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	return (0);
}
