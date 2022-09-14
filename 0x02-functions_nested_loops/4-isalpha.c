#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 *@c : character to check the case 
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	return (0);
}
