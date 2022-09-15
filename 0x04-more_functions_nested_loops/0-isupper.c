#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 *@c : character to check
 *
 * Return:0 or 1
 */
 int _isupper(int c)
 {
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
 }
