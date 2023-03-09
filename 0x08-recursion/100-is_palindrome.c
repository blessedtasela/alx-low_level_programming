#include "main.h"
int palindrome(char *s, int x, int len);
int _strlen(char *s);
/**
 * is_palindrome - checks for empty string
 * @s: value of string
 * Return: returns 1 on true, 0 if false
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (palindrome(s, 0, _strlen(s)));
	_putchar('\n');
}
/**
 * palindrome - checks for empty string
 * @x: iterator
 * @len: length of string
 * @s: string
 * Return: palidrome
 */
int palindrome(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
	return (0);
	if (x >= len)
	return (1);
	return (palindrome(s, x + 1, len - 1));
}
/**
 * _strlen - calculate length of string
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen(s + 1));
}
