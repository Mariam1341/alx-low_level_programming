#include "main.h"
/**
 * print_alphabet - Entry point
 *
 *Description:prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void){
	for (char i = 'a'; i <= 'z'; i++){
		_putchar(i);
	}
	_putchar('\n');
}
