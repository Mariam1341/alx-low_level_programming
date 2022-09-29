#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Maraim
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x08-recursion.
 */

#include <stddef.h>
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int last_index(char *s);
int check(char *s, int start, int end, int pair);
int is_palindrome(char *s);
int checker(char *s1, char *s2, int a, int b, int wildUsed);
int wildcmp(char *s1, char *s2);
#endif
